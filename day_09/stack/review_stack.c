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
int peek(Node* top);// 查看栈顶元素的值

int main()
{
    Node* top = NULL;
    push(&top, 1); // top指针指向栈顶，ptr_top指向top指针   Node** ptr_top = &top;
    push(&top, 2);
    push(&top, 3);
    push(&top, 4);  
    push(&top, 5);  

    printf("%d\n", peek(top));

    while(!isEmpty(top))
    {
        printf("%d ", pop(&top));
    }
    printf("\n");

    return 0;
}

void push(Node** ptr_top, int val)
{
    // 创建新结点
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL)
    {
        printf("Error: malloc failed in push\n");
        exit(1);
    }
    // 初始化结点
    newNode->val = val;
    newNode->next = *ptr_top; // newNode链接以前的头结点
    *ptr_top = newNode;
}

int pop(Node** ptr_top)
{
    if(isEmpty(*ptr_top))
    {
        printf("Error: stack is Empty");
        exit(1);
    }
    Node* old_top = *ptr_top;
    int result = old_top->val;
    *ptr_top = (*ptr_top)->next;
    free(old_top);
    return result;
}


bool isEmpty(Node* top) // 判断栈是否为空
{
    return top == NULL;
}

// 查看栈顶元素的值
int peek(Node* top)
{
    if(isEmpty(top))
    {
        printf("Error: stack is Empty");
        exit(1);
    }
    return top->val;
}