#include<stdio.h>
#pragma pack(1)

struct student
{
    int num;
    char name;
    double decimal;
}stud;

int main()
{
    printf("Sizeof of student is :- %ld\n",sizeof(stud));
}