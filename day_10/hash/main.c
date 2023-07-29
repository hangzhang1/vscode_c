#include "hashmap.h"

int main()
{
    HashMap* map = HashMap_create();
    HashMap_put(map,"liuyifei", 1);
    HashMap_put(map,"zhaolinger", 2);
    HashMap_put(map,"wuqing", 3);

    printf("%d\n", HashMap_get(map, "liuyifei"));
    printf("%d\n", HashMap_get(map, "Li"));
    HashMap_remove(map, "liuyifei");
    printf("%d\n", HashMap_get(map, "liuyifei"));
    return 0;
}