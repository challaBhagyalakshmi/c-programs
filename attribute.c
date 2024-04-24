#include<stdio.h>
#pragma pack(1)

struct student
{
    int num;
    char name;
    double decimal;
}__attribute__((packed)); ;

int main()
{
    struct student stud;
    printf("Sizeof of student is :- %ld\n",sizeof(stud));
}