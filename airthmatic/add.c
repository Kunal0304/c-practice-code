#include<stdio.h>
void main()
{

int a,i,n=0;
printf("automatic addition one to your enter value\n\n");

printf("enter value = ");
scanf("%d",&a);


for ( i = 0; i <=a; i++)
{
    n=n+i;
}
printf("value is = %d ",n);
}