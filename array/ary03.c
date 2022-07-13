#include<stdio.h>
void main()
{
    int s;
    printf("enter the size of array");
    scanf("%d",&s);
    int ary[s],i;
    printf("enter the %d element of array\n",s);
    for ( i = 0; i < s; i++)
    {
        scanf("%d",&ary[i]);
    }
    
printf("traversing of arry elements\n");
for ( i = 0; i < s; i++)
{
    printf("index %d element %d \n",i,ary[i]);
}

}