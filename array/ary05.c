#include<stdio.h>
void main()
{
    int s,sum;
    printf("enter the size of array");
    scanf("%d",&s);

    int ary[s],i;
    printf("enter the %d element of array\n",s);

    for ( i = 0; i < s; i++)
    {
        scanf("%d",&ary[i]);
    }
    
    printf("traversing of arry elements\n");

    for ( i = 1; i <=s; i++)
    {
        sum=sum+ary[i];
    }
    printf("sum is %d",sum);

}