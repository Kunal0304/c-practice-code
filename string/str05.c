#include<stdio.h>
#include<string.h>
void main(){

    int t;
    char s[20],*c;
    printf("enter a string\n");
    gets(s);
    c=strchr(s,'e');
    if (c==0)
    {
        printf("not found");
    }
    else
    {
        printf("found");
    }
    
    
}