#include<stdio.h>
int* add(int,int);
void main()
{
    int a,b,*p;
    printf("enter two no.");
    scanf("%d%d",&a,&b);
    p=add(a,b);
    printf("add is %d",*p);
}

int* add(int i ,int j)
{
    int k=i+j;
    int t=&k;
    return t;
}