#include<stdio.h>

union abc
{
    int a;
    char b;
    double c;
}abcd;

int main()
{
    printf("Size of union abc is :- %ld\n",sizeof(abcd));
    printf("Address of a is :- %p\n",&abcd.a);
    printf("Address of b is :- %p\n",&abcd.b);
}