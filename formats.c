#include<stdio.h>

int main()
{
    int num1=3;
    int num2=5;
    int num3=-4;
    int octal=012;
    float val=3.146;
    int hexa=0xA;
    printf("Integer of num1 and num2 is :- %d %d \n",num1,num2);
    printf("unsigned integer of num3 is :- %u\n",num3);//unsigned format specifier
    printf("Octal value of octal is :- %o\nInteger value of octal number is :- %d\n",octal,octal);
    printf("Floating point value of val is :- %f\n printing precison value like same input precision :-%g\nfixed precisions :- %.2f\n",val,val,val);
    printf("Hexadecimal value of hexa is :-%x\nInteger value of hexadecimal number is :-%d\n",hexa,hexa);
    printf("Hexadecimal value of hexa is :-%X\n",hexa);
    printf("Address of num1 is :- %p\n",&num1);//%p prints variable address in hexadecimal format
    printf("%s\n","Javatpoint");
    printf("Minimum width field specifier\n%3d\n%03d\n%-3d",num1,num2,num2);

}