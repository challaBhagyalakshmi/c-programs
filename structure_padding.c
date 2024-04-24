#include<stdio.h>

struct employee
{
    char name[20];
    int empid;
    struct address
    {
        char city[30];
        int pincode;
        char phone[12];
    }add;
};

struct student
{
    char a;
    char b;
    int c;
}stud;


int main()
{
    struct employee emp;
    printf("Enter emp details\n");
    /**scanf("%s%d%s%d%s",&emp.name,&emp.empid,&emp.add.city,&emp.add.pincode,&emp.add.phone);
    printf("%s\t%d\t%s\t%d\t%s\n",emp.name,emp.empid,emp.add.city,emp.add.pincode,emp.add.phone);*/
    printf("Size of employee is :- %d\n",sizeof(emp));

}

