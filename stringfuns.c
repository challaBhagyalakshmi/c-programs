#include<stdio.h>
#include<string.h>

int main()
{
    char str[20],str1[30],str2[20];
    printf("Enter a string");
    fgets(str,20,stdin);
    printf("Enter Second string :- ");
    fgets(str1,sizeof(str1),stdin);
    //puts(str1);
    if(strcmp(str,str1)==0)
        printf("Strings are same\n");
    else
        printf("String are not same\n");
    printf("Length of str is :- %d\n",strlen(str));
    strcpy(str2,str);
    puts(str2);
    strcat(str1,str);
    printf("String concatenation :- %s",str1);
    printf("string Reverse : -%s\n",strdup(str));
    //printf("Lower string is :-%s\n",strlwr(str));
    char *result;
    result=strstr(str,"world");
    printf("Substring is :- %s\n",result);

}