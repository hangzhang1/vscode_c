// 链表的实现

// typedef struct node_s
// {// 链表节点
//     int val;
//     struct node_s *next;
// } Node;

// typedef struct linkedlist_s
// {// 链表
//     Node *head;
//     Node *tail;
//     int size; // 链表中节点的个数
// } LinkedList;
#include "linkedlist.h"

// 创建空链表
LinkedList* create_list()
{
    return (LinkedList*)calloc(1, sizeof(LinkedList));
}


void add_before_head(LinkedList *list, int value)//在链表头部创建一个结点
{
    // 创建一个新结点
    Node *newnode = (Node*)malloc(sizeof(Node));
    if(NULL == newnode)
    {
        printf("error: malloc failed in add_befor_head");
        exit(1);
    }
    // 初始化结点
    newnode->val = value;
    newnode->next = list->head;
    list->head = newnode;
    // 判断链表是否非空
    if(list->tail == NULL)
    {
        list->tail = newnode;
    }
    // 更新size
    list->size++;
    
} // 这就是一个接口 开始进行单元测试 


void add_after_tail(LinkedList *list, int value)// 在链表尾部添加一个节点
{
    Node *newnode = (Node*)malloc(sizeof(Node));
    if(NULL == newnode)
    {
        printf("error: malloc failed in add_after_head");
        exit(1);
    }
    // 初始化结点
    newnode->val = value;
    newnode->next = NULL;
    
    // 判断链表是否为空
    if(list->head == NULL)
    {
        list->head = newnode;
        list->tail = newnode;
    }
    else
    {
        // 链接新结点
        list->tail->next = newnode;
        // 更新list->tail 这个值
        list->tail = newnode;
    }
    list->size++;
}


void add(LinkedList *list, int value, int index)// 在链表的index位置添加一个节点
{
    if(index < 0 || index > list->size)
    {
        printf("Error: Illegal index.\n");
        exit(1);
    }

    Node *newnode = (Node*)malloc(sizeof(Node));
    if(NULL == newnode)
    {
        printf("error: malloc failed in add");
        exit(1);
    }
    //初始化
    newnode->val = value;
    if(index == 0)
    {
        // 头插法
        newnode->next = list->head;
        list->head = newnode;
        // 判断链表是否非空
        if(list->tail == NULL)
        {
            list->tail = newnode;
        }
        // 更新size
        list->size++;
    }
    else if (index == list->size)
    {
        // 尾插法
        newnode->next = NULL;
    
        // 判断链表是否为空
        if(list->head == NULL)
        {
            list->head = newnode;
            list->tail = newnode;
        }
        else
        {
            // 链接新结点
            list->tail->next = newnode;
         // 更新list->tail 这个值
            list->tail = newnode;
        }
        list->size++;
    }
    else
    {
        // 找到索引为index-1 的结点
        Node *p = list->head;
        for(int i = 0; i < index-1; i++)
        { // i=0时，p执行下条语句指向index 1； 当i = index-2时，p指向index-1这个节点；当i = index-1时跳出循环， p就指向index -1 这个节点了 也就是index的前驱节点
            p = p->next;
        }
        newnode->next = p->next;
        p->next = newnode;
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
        return false;
    // 删除第一个元素
    if(prev == NULL)
    {
        if(list->size == 1)
        {
            list->head = list->tail =NULL;
        }
        else{
            list->head = list->head->next;
        }
        free(curr);
    }
    else{
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
    // 没有找到
    return -1;
}

void destroy_list(LinkedList *list)
{
    // 释放结点空间
    Node *curr = list->head;  // curr 只是个结点指针，而不是一个结点实体
    while(curr != NULL)
    {
        Node* next = curr->next;
        free(curr); //释放curr指向的结点
        curr = next;
    }

    // 释放linkedlist结构体
    free(list); // 释放list指向的结构体
}
