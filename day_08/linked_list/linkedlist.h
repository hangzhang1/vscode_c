// 链表的接口
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
typedef struct node_s
{// 链表节点
    int val;
    struct node_s *next;
} Node;
 
typedef struct linkedlist_s
{// 链表
    Node *head;
    Node *tail;
    int size; // 链表中节点的个数
} LinkedList;


//构造方法：创建一个空链表

LinkedList* create_list();
//析构方法：释放内存空间
void destroy_list(LinkedList *list);

void add_before_head(LinkedList *list, int value);// 在链表头部添加一个节点
void add_after_tail(LinkedList *list, int value);// 在链表尾部添加一个节点
void add(LinkedList *list, int value, int index);// 在链表的index位置添加一个节点


bool remove_node(LinkedList *list, int val);// 删除第一个值为val的节点，如果没有找到，返回false

int indexOf(LinkedList *list, int val);// 返回第一个值为val的节点的下标，如果没有找到，返回-1
