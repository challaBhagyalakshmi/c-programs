#include<stdio.h>

int main()
{
    int *ptr=NULL;
    //int val=*ptr;//null pointer dereference
    //printf("%d\n",val);
    //int a=2/0;
    //printf("%d\n",a);
    int a[4]={1,2,3,4};
    printf("%d\n",a[10]);//Array out of bound

}