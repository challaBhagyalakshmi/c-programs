#include<stdio.h>

int main()
{
    int *ptr,num;
    num=4;
    ptr=&num;
    printf("Memory address of num is  :- %d\n",ptr);
    printf("Value of num is :- %d\n",*ptr);
}