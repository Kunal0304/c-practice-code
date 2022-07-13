#include<stdio.h>
void main()
{
    char fname[]={'s','h','r','i'};
    char lname[]="rahul jain";
    printf("%s%s",lname,fname);
    char name[50];
    printf("\nenter your name");
    // scanf("%s",&name);
    // printf("welcome %s in indore",name);
    gets(name);
    puts(name);
}