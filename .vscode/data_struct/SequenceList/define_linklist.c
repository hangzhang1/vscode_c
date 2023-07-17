#include<stdio.h>


LinkList List_HeadInsert(LinkList &L); // 头插法创建单链表

typedef struct LNode
{
    int data; // 数据域
    struct LNode *next; // 指针域
}LNode, *LinkList;

int main()
{
    LinkList L; // 声明一个指向单链表的指针
    List_HeadInsert(L); // 调用头插法创建单链表 
    return 0;
}

// 头插法创建单链表
LinkList List_HeadInsert(LinkList *L)
{
    LNode *s; // 定义一个新的结点
    int x; // 定义一个数据域
    L = (LinkList)malloc(sizeof(LNode)); // 创建一个头结点
    L->next = NULL; // 头结点的指针域置空
    scanf("%d", &x); // 输入结点的值
    while(x != 9999)
    {
        s = (LNode*)malloc(sizeof(LNode)); // 创建一个新的结点
        s->data = x; // 将新结点的数据域置为x
        s->next = L->next; // 将新结点的指针域指向头结点的下一个结点
        L->next = s; // 将头结点的指针域指向新结点
        scanf("%d", &x); // 输入结点的值
    }
    return L;
}