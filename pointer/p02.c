#include<stdio.h>
void main()
{
int ary[]={10,20,30,40,50,60},*p[5],i;

for ( i = 0; i < 5; i++)
{
    p[i]=&ary[i];
    printf("address of ary[%d] is %u\n",i,&ary[i]);
    printf("address of p[%d] is %u\n",i,&p[i]);
    printf("address of p[%d] is %d \n",i,*p[i]);
}

}