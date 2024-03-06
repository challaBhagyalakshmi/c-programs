#include<stdio.h>

enum daysofweek{sunday,monday,tuesday,wednesday,thursday,friday,saturday};

int main()
{
    enum daysofweek today;
    today=sunday;
    printf("week value of the today day : - %d\nsunday :-%d\nmonday :-%d\ntuesday :- %d\n",today,sunday,monday,tuesday);
    
}