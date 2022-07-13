#include<stdio.h>
void main()
{
    int ary[5],i;
    printf("enter 5 elements:-\n");
    for ( i = 0; i <3; i++)
    {
        scanf("%d\n",& ary[i]);
    }
    printf("traversing elements of array\n");
     for ( i = 0; i <5; i++)
    {
        printf("index %d element %d\n",i,ary[i]);
    }
}