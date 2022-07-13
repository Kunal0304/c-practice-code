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
    for ( i = 1; i <= s; i++)
    {
        if (i%2==0)
        {
            printf("%d is even no.\n",i);
        }
        else
        {
            printf("%d is odd no.\n",i); 
        }        
    }
    
}