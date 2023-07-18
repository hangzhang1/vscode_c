#include "mystack.h"

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