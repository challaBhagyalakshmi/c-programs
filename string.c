#include<stdio.h>

int main()
{
    char str[20]="Hello world";
    char *ptr;
    ptr=str;
    ptr="Hiiiiii";
    printf("%s\t%s\n%s\n",str,ptr,str);
}