#include<stdio.h>

int main()
{
    int size,index,carry=1;
    printf("Enter a number of bits you want to 2's complement :- ");
    scanf("%d",&size);
    char binary_format_number[size],ones_comple[size],twos_compl[size];
    printf("Enter a binary number :-");
    scanf("%s",binary_format_number);
    printf("%s\n",binary_format_number);
    for(index=0;index<size;index++)
    {
        if(binary_format_number[index]=='0')
        {
            ones_comple[index]='1';
        }
        else
        {
            ones_comple[index]='0';
        }
    }
    ones_comple[index]='\0';
    printf("One's complement of given binary number is :-%s\n",ones_comple);

    for(index=size-1;index>=0;index--)
    {
        if(carry==1&&ones_comple[index]=='0')
        {
            twos_compl[index]='1';
            carry=0;
        }
        else if(carry==1&&ones_comple[index]=='1')
        {
            twos_compl[index]='0';
          
        }
        else
        {
            twos_compl[index]=ones_comple[index];
        }
    }
    twos_compl[size]='\0';
    printf("2's complement of Given binary number is :- %s\n",twos_compl);
    return 0;

}