#include<stdio.h>
#include<stdlib.h>
typedef struct node_s{
    int val;
    struct node_s *next;
}Node;

// void* add_to_list(Node *list, int val);
void* add_to_list(Node **ptr_list, int val);
int main(){
    Node *list = NULL;
    add_to_list(&list, 10);
    add_to_list(&list, 20);
    add_to_list(&list, 30);
    add_to_list(&list, 40);
    return 0;
}

// void* add_to_list(Node *list, int val){  
//     //这样做 main函数中的list不会被修改 是不会创建新的链表的
//     Node *new_node = (Node*)malloc(sizeof(Node));
//     if(new_node == NULL){
//         printf("Error: malloc failed in add_to_list\n");
//         exit(EXIT_FAILURE);
//     }
//     new_node->val = val;
//     new_node->next = list;
//     list = new_node;
// }

// 需要使用二级指针
void* add_to_list(Node **ptr_list, int val)
{
    Node *new_node = (Node*)malloc(sizeof(Node));
    if(new_node == NULL)
    {
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }

    new_node->val = val;
    new_node->next = *ptr_list;
    *ptr_list = new_node;
}