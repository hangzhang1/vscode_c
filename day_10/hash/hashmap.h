// 接口

#include<stdio.h>
#include<stdlib.h>
#define N 1123
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
    Entry* table[N];
}HashMap;

HashMap* HashMap_create();
void HashMap_destroy(HashMap* map);

V HashMap_get(HashMap* map, K key);
V HashMap_put(HashMap* map, K key, V val);
V HashMap_remove(HashMap* map, K key);


