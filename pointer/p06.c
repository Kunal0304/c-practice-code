#include<stdio.h>
void swa(int*,int*);
void main()
{
 int a=10,b=20;
 printf("before swapping value of a is %d and b is %d\n",a,b);
    swa(&a,&b);
 printf("after swapping value of a is %d and b is %d\n",a,b);

}

void swa( int *i ,int *j)
{
    int k=*i;
    *i=*j;
    *j=k;
 printf(" swapping value of a is %d and b is %d\n",*i,*j);


}