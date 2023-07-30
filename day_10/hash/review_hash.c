#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 123
typedef char* K;
typedef int V;

typedef struct entry_s
{
    K key;
    V value;
    struct entry_s* next;
}Entry;

typedef struct hashmap
{
    Entry* table[N]; //table是一个数组，是一个由N个指针类型元素组成的指针数组
}HashMap;

int hash(char *key);
HashMap* HashMap_create();
void HashMap_destroy(HashMap* map);

V HashMap_get(HashMap* map, K key);
V HashMap_put(HashMap* map, K key, V val);
V HashMap_remove(HashMap* map, K key);


int main()
{

    return 0;
}

HashMap* HashMap_create()
{
    return (HashMap*)calloc(1, sizeof(HashMap));
}

int hash(char *key)
{
    int h = 0, g;
    while(*key)
    {
        h = (h << 4) + *key++; //“*和++”两者优先级相同，需要按从右到左的顺序执行。
        g = h & 0xf0000000;
        if(g)
            h ^= g >> 24;
        h &= ~g;
    }
    return h % N;
}

V HashMap_get(HashMap* map, K key)
{
    // 根据Key来获取索引
    int idx = hash(key);
    // 遍历链表
    Entry* curr = map->table[idx]; // 有了头结点
    while(curr != NULL)
    {
        // 判断key是否存在
        if(strcmp(key, curr->key) == 0)
        {
            return curr->value;
        }
        curr = curr->next;
    }
    // 不存在这样的key
    return -1;
}

V HashMap_put(HashMap* map, K key, V val)
{
    // 根据key获取索引
    int idx = hash(key);
    // 遍历链表
    Entry* curr = map->table[idx]; // 头结点
    while(curr != NULL)
    {
        // 判断key是否存在
        if(strcmp(key, curr->key) == 0)
        { // 存在这样的key，对其进行更新
            V oldValue = curr->value;
            curr->value = val;
            return oldValue;
        }
        curr = curr->next;
    }
    // 不存在这样的key，添加节点，使用头插法
    Entry* entry = (Entry*)malloc(sizeof(Entry));
    if(entry == NULL)
    {
        printf("Error:malloc failed in HashMap_put\n");
        exit(1);
    }
    entry->key = key;
    entry->value = val;
    entry->next = map->table[idx];
    map->table[idx] = entry;
    return -1;
}
V HashMap_remove(HashMap* map, K key)
{
    // 根据key获取索引
    int idx = hash(key);
    // 要移除某个结点，不仅需要找到这个结点，还需要它的前驱节点
    Entry* prev = NULL; // 单链表删除节点 必须保存前驱节点
    Entry* curr = map->table[idx];
    while(curr != NULL)
    {
        // 判断key是否存在
        if(strcmp(key, curr->key) == 0)
        {
            // 删除节点
            if(prev == NULL)
            { //头结点
                map->table[idx] = curr->next;
            }
            else
            {
                prev->next = curr->next;
            }
            // 释放空间
            V removeValue = curr->value;
            free(curr);
            return removeValue;
        }
        prev = curr;
        curr = curr->next;
    }
    // 不存在这样的key
    return -1;
}

void HashMap_destroy(HashMap* map)
{
    // 释放所有节点
    for (int i = 0; i < N; i++)
    {
        Entry* curr = map->table[i];  // 获得索引为i链表的头结点
        while (curr != NULL)
        {
            // 先保存后继结点，然后删除当前结点
            Entry* next = curr->next;
            free(curr);
            curr = next;
        }
    }

    // 释放HashMap结构体
    free(map);
}
