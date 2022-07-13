#include<stdio.h>
#include<string.h>
void main()
{
    int i,j;
    char num[10],pwd[10];
    gets(num);
    printf("entera number");
    gets(pwd);
    i=strcmp(num,"admin");
    j=strcmp(pwd, "admin123");
    if (i==0&&j==0)
    {
        printf("welcom to ADMIN panel");
    }
    else
    {
        printf("error id password");
    }
    
    
}