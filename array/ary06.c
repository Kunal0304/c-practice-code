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
    
    for ( i = 0; i < s; i++)
    {
        
        f=1;
    for ( j = 1; j <=ary[i]; j++)
    { 
        f=f*j;
    }
    printf("factorial of %d is %d\n",ary[i],f);
    }    

}