#include<stdio.h>

void printHello()
{
    printf("Hello world\n");
}

void withoutargu(void)
{
    printf("This is accepting no aruguements\n");
}

int main()
{
    void* ptr;
    int num=4;
    ptr=&num;
    printHello();
    printf("This is void variable :- %d\n",*(int *)ptr);
    withoutargu();
}