#include<stdio.h>
void main()
{
    int s,f,j;
    printf("enter the size of array");
    scanf("%d",&s);

    int ary[s],i;
    printf("enter the %d element of array\n",s);

    for ( i = 0; i < s; i++)
    {
        scanf("%d",&ary[i]);
    } 

   int big=ary[0];
    for ( i = 0; i < s; i++)
    {
        if (big<ary[i])
        {
            big=ary[i];
        }
        
    }
    printf("biggest element of array is %d",big);
}
    