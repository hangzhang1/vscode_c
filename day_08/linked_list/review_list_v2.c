#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

typedef struct node_s
{
    int val;
    struct node_s* next;
}Node;

typedef struct Linkedlist_s
{
    Node *head;
    Node *tail;
    int size;
}LinkedList;

LinkedList* create_list();
//析构方法：释放内存空间
void destroy_list(LinkedList *list);
void add_before_head(LinkedList *list, int value);// 在链表头部添加一个节点
void add_after_tail(LinkedList *list, int value);// 在链表尾部添加一个节点
void add(LinkedList *list, int value, int index);// 在链表的index位置添加一个节点
bool remove_node(LinkedList *list, int val);// 删除第一个值为val的节点，如果没有找到，返回false
int indexOf(LinkedList *list, int val);// 返回第一个值为val的节点的下标，如果没有找到，返回-1

int main()
{

    return 0;
}


LinkedList* create_list()
{
    return (LinkedList*)calloc(1, sizeof(LinkedList));
}

void add_before_head(LinkedList *list, int value)// 在链表头部添加一个节点
{
    // 首先要创建一个新的节点
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(NULL == newNode)
    {
        printf("error: malloc failed in add_befor_head");
        exit(1);
    }
    newNode->val = value;
    newNode->next = list->head;
    list->head = newNode;
    // 判断链表是否为空
    if(list->tail == NULL)
    {
        list->tail = newNode;
    }
    // 更新size
    list->size++;
}

void add_after_tail(LinkedList *list, int value)// 在链表尾部添加一个节点
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(NULL == newNode)
    {
        printf("error: malloc failed in add_after_head");
        exit(1);
    }
    // 初始化
    newNode->val = value;
    newNode->next = NULL;
    // 判断链表是否为空
    if(list->head == NULL)
    {
        list->head = newNode;
        list->tail = newNode;
    }
    else
    {
        // 链接新结点
        list->tail->next = newNode;
        list->tail = newNode;
    }
    list->size++;
}

void add(LinkedList *list, int value, int index)// 在链表的index位置添加一个节点
{
    if(index< 0 || index >list->size)
    {
        printf("Error: Illegal index.\n");
        exit(1);
    }
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(NULL == newNode)
    {
        printf("error: malloc failed in add");
        exit(1);
    }
    // 初始化
    newNode->val = value;
    if(index == 0)
    {
        // 在第一个位置插入，也就是头插法
        newNode->next = list->head;
        list->head = newNode;
        // 判断链表是否为空
        if(list->tail == NULL)
        {
            list->tail = newNode;
        }
        list->size++;
    }
    else if(index == list->size)
    {
        // 尾插法
        if(list->head=NULL)
        {
            list->head = newNode;
            list->tail = newNode;
        }
        else{
            list->tail->next = newNode;
            list->tail = newNode;
        }
        list->size++;
    }
    else
    {
        // 要在index处插入，就要先找到索引为index-1的位置
        Node* p = list->head;
        for(int i = 0; i < index -1; i++)
        {
            p = p->next; // i = index-2 时，p指向index-1这个结点
        }
        newNode->next = p->next;
        p->next = newNode;
        list->size++;
    }
}

bool remove_node(LinkedList *list, int val)// 删除第一个值为val的节点，如果没有找到，返回false
{
    Node *prev = NULL;
    Node *curr = list->head;
    // 寻找前驱节点
    while(curr != NULL && curr->val != val)
    {
        prev = curr;
        curr = curr->next;
    }
    // 没有这样的元素
    if(curr == NULL)
        return;
    // 删除第一个元素
    if(prev == NULL)
    {
        if(list->size == 1)  // 链表只有一个元素
        {
            list->head = list->tail = NULL;
        }
        else   // 链表不止一个元素，但是val是第一个元素
        {
            list->head = list->head->next;
        }
        free(curr);
    }
    else{  // 不是在第一个元素中找到的
        prev->next = curr->next;
        if(prev->next == NULL)
        {// 如果删除的是尾结点
            list->tail = prev;
        }
        free(curr);
    }
    list->size--;
    return true;
}

int indexOf(LinkedList *list, int val)// 返回第一个值为val的节点的下标，如果没有找到，返回-1
{
    Node* curr = list->head;
    for(int i = 0; i < list->size; i++, curr=curr->next)
    {
        if(curr->val == val)
        {
            return i;
        }
    }
    // 如果没有找到
    return -1;
}

void destroy_list(LinkedList *list)
{
    // 释放节点空间
    Node *curr = list->head; // curr 只是个结点指针，而不是一个结点实体
    while (curr !=NULL)
    {
        Node* next = curr->next;
        free(curr);   // 释放curr指向的结点
        curr = next;
    }

    // 释放linkedlist结构体
    free(list);  // 释放list指向的结构体
}