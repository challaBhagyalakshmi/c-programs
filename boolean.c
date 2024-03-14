#include<stdio.h>
#include<stdbool.h>

int main()
{
    bool val=true;
    bool arr[]={true,false};
    bool x=true,y=false;
    if(val==true)
    {
        printf("value of val is true\n");
    }
    else
        printf("value of val is false\n");
    printf("Printing boolean array :- ");
    for(int i=0;i<2;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("x&&y is :- %d\n",x&&y);
    printf("x||y is :- %d\n",x||y);
    printf("!x is : - %d\n",!x);
}