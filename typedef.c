#include<stdio.h>

typedef enum{false,true} boolean;

int main()
{
    boolean val=false;
    if(val==true)
    {
        printf("value of val is true\n");
    }
    else
        printf("value of val is false\n");
}