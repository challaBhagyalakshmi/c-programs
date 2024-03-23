#include<stdio.h>

int main()
{
    int size,index,j=0,temp;
    printf("Enter a size of array :- ");
    scanf("%d",&size);
    int array[size];
    printf("ENter an array elements ");
    for(index=0;index<size;index++)
    {
        scanf("%d",&array[index]);
    }
    
    for(index=0;index<size-1;index++)
    {
        for(j=index+1;j<size;j++)
        {
            if(array[index]>array[j])
            {
                temp=array[index];
                array[index]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("Sorted Array is  :- ");
    for(index=0;index<size;index++)
    {
        printf("%d\t",array[index]);

    }

    

}