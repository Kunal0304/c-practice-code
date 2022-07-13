#include<stdio.h>
void add(int *p1,int *p2);
void main()
{
int a,b;
printf("enter two numbers");
scanf("%d%d",&a,&b);
add(&a,&b);
}
void add(int *p1,int *p2)
{
    int c=*p1+*p2;
    printf("add is %d",c);
}