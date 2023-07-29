// 实现接口
#include"hashmap.h"


// 创建空的hash表
HashMap* HashMap_create()
{
    return (HashMap*)calloc(1, sizeof(HashMap));
}
void HashMap_destroy(HashMap* map)
{
    // 释放所有节点
    for(int i = 0; i < N; i++)
    {
        Entry* curr = map->table[i];
        while(curr!=NULL)
        {
            // 保存后继结点
            Entry* next = curr->next;
            free(curr);
            curr = next;
        }
    }

    // 释放HashMap结构体
    free(map);
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
    // 根据Key获取索引
    int idx = hash(key);
    // 遍历链表
    Entry* curr = map->table[idx]; // 有了头结点
    while(curr != NULL)
    {   
        // 判断key是否存在
        if(strcmp(key, curr->key) == 0)
        {
            return curr->key;
        }
        curr = curr->next;
    }
    // 不存在这样的 key
    return -1;
}


V HashMap_put(HashMap* map, K key, V val)
{
    // 根据Key获取索引
    int idx = hash(key);
    // 遍历链表
    Entry* curr = map->table[idx]; // 有了头结点
    while(curr != NULL)
    {   
        // 判断key是否存在
        if(strcmp(key, curr->key) == 0)
        {
            V oldValue  = curr->value;
            curr->value = val;
            return oldValue;
        }
        curr = curr->next;
    }
    // 不存在这样的 key ,添加节点，头插法
    // 创建键值对
    Entry* entry = (Entry*)malloc(sizeof(Entry));
    if(entry == NULL)
    {
        printf("Error:malloc failed in HashMap_put\n");
        exit(1);
    }
    entry->key = key;
    entry->value = val;
    entry->next = map->table[idx];
    // 更新链表的头结点
    map->table[idx] = entry;
    return -1;
}


V HashMap_remove(HashMap* map, K key)
{
    // 根据Key获取索引
    int idx = hash(key);
    // 遍历链表
    Entry* prev = NULL; // 单链表删除结点必须保存前驱节点
    Entry* curr = map->table[idx]; // 有了头结点
    while(curr != NULL)
    {   
        // 判断key是否存在
        if(strcmp(key, curr->key) == 0)
        {
            //删除节点
            if(prev == NULL)
            {
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
    // 不存在这样的 key
    return -1;
}