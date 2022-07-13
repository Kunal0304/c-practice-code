#include<stdio.h>
void main()
{
int a,b,c;
printf("put value of a and b");
scanf("%d%d",&a,&b);
printf("before swaping a is %d and b is %d\n",a,b);
c=a;
a=b;
b=c;

printf("after swaping a is %d and b is %d\n",a,b);
}