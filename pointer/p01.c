#include<stdio.h>
void main()
{
    int ary[]={10,20,30,40,50,60},*p,i;
    printf("enter a number\n");
    p=&ary[4];
    for ( i = 0; i < 5; i++)
    {
        printf("address of ary[%d] index is %u\n",i,&ary[i]);
        printf("address of pointer is %u\n",p);
        p--;
    }
    
}