#include<stdio.h>

void swap(int,int);

void main()
{
 int a=10,b=20;
 printf("before swapping value of a is %d and b is %d\n",a,b);

 swap(a,b);

 printf("after swapping value of a is %d and b is %d\n",a,b);
 
}

void swap(int i,int j)
{
    int c=i;
    i=j;
    j=c;
 printf("after swapping value of a is %d and b is %d\n",i,j);
    
}