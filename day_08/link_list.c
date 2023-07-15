#include<stdio.h>
#include<stdlib.h>

typedef struct node_s
{
    int val;
    struct node_s *next;
}Node;


int main()
{

    Node *list = NULL;
    list = add_to_list(list, 10);
    list = add_to_list(list, 20);
    list = add_to_list(list, 30);
    list = add_to_list(list, 40);

    return 0;
}

Node* add_to_list(Node *list, int val)
{  // add a new node to the head of the list
    Node *new_node = (Node*)malloc(sizeof(Node));
    if(new_node == NULL)
    {
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }

    new_node->val = val;
    new_node->next = list;
    return new_node;
}