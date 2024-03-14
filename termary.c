#include<stdio.h>

int main()
{
    int age,var,var1;
    printf("Enter your age :- ");
    scanf("%d",&age);
    int result=(age>=18)?printf("Eligible for voting\n"):printf("Not eligible for voting\n");
    printf("%d\n",result);
    var1=(var=5)?3:2;
    printf("%d\t%d\t\n",var1,var);

}