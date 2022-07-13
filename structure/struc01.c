#include<stdio.h>
#include<string.h>
struct struc01
{
    int empno;
    char name[10];
    char surname[8];
    int mob[10];
};

union struc
{
    int empno;
    char name[6];
    char surname[5];
    char mob[10];
};

void main(){

    struct struc01 s1;
    union struc s2;
    
    printf("enter a roll no.");
    scanf("%d",&s1.empno);
    printf("enter your name");
    scanf("%s",&s1.name);
    printf("enter surname name");
    scanf("%s",&s1.surname);
    printf("enter mobile no.");
    scanf("%s",&s1.mob);

printf("%d\n",sizeof(s2));
    printf("enter your name");
    scanf("%s",&s2.name);
    printf("enter surname name");
    scanf("%s",&s2.surname);
    printf("enter a empno no.");
    scanf("%d",&s2.empno);

    printf("my name is %s and roll no is %d and my course is %s and mobile no. is %s\n ",s1.name,s1.empno,s1.surname,s1.mob);

    printf("my name is %s %s and my empno is %d ",s2.name);

}
