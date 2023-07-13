#include<stdio.h>

int main()
{
    // 二维数组 
    char planets[][8] = {"Mecury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    //这样有一个坏处，要是 字符串长短不一致，会导致数组里面很多空字符

    // 字符指针数组
    char* planets2[] = {"Mecury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    // 这是一个长度为8的指针数组，数组里面的每一个元素都是一个指针，指向一个字符串


    // 数组指针
    char (*planets3)[8] = planets;
    return 0;
}