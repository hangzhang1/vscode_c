#include "linkedlist.h"


// 测试
int main()
{
    LinkedList *list = create_list();
    add_before_head(list, 1);
    add_before_head(list, 2);
    add_before_head(list, 3);
    add_after_tail(list, 4);
    add_after_tail(list, 5);
    // add(list, 1, 0);
    // add(list, 2, 1);
    // add(list, 3, 2);
    // add(list, 5, 1);

    // remove_node(list,1);
    // remove_node(list,3);
    // remove_node(list,5);
    // int index = indexOf(list, 11);
    destroy_list(list);
    printf("hello world\n");
    return 0;
}