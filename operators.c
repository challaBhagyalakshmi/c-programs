#include<stdio.h>

int main()
{
    int num1=2,num2=3,rem=num1%num2,prefix,postfix,comma,ternary;
    prefix=++num1;
    postfix=num2++;
    comma=(1,2,3,4,5+7);
    ternary=(num1>num2)?printf("num1 is largest number :- %d\n",num1):num2;
    printf("prefix :- %d\npostfix :- %d\ncomma :- %d\nternary :- %d\n",prefix,postfix,comma,ternary);
    printf("Remainder of num1 & num2 is :- %d\n",rem);
    printf("Left shift of num1 is :- %d\nRight shift of num1 is : -%d\n",num1<<2,num1>>1);

}