#include<stdio.h>
void main()
{
    int a,i,j,k;
    printf("enter how many lines ");
    scanf("%d",&a);

    for ( i = 1; i <=a; i++)
    {
        printf("%d",i); 

        for ( k = a; k > i; k--)
        {
        printf(" ");
            
        }
        
        for ( j = 1; j <= i*2-1; j++)
        {
    printf("*");
            
        }
        printf("\n");
        
    }
    
}