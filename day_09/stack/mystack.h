// 栈的接口

#include<stdio.h>
#include<stdbool.h>
typedef struct Nodes_s
{
    int val;
    struct Node_s *next;
}Node;


void push(Node** ptr_top, int val);  // 我们要改变的是top指针的值，而不是改变top指针指向变量的值 所以要用二级指针 

int pop(Node** ptr_top);
bool isEmpty(Node* top); // 判断栈是否为空

// 查看栈顶元素的值
int peek(Node* top);


