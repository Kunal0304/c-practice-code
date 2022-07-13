#include<stdio.h>
#include<string.h>

struct struc
{

    int roll;
    char name[10];
    char courses[20];
    
};

void main(){

    struct struc s1;
    
    printf("enter a roll no.");
    scanf("%d",&s1.roll);
    printf("enter your name");
    scanf("%s",&s1.name);
    printf("enter cource name");
    scanf("%s",&s1.courses);

    printf("my name is %s and roll no is %d and my course is %s ",s1.name,s1.roll,s1.courses);


}