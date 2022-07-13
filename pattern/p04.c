#include<stdio.h>
void main()
{
int a,i,j,k,sum=0;

printf("enter no. of lines");
scanf("%d",&a);
for ( i = 1; i <=a; i++)
{
    for ( k = a; k >=i; k--)
    {
    printf(" ");
        
    }
    
    for ( j =1; j <=i; j++)
    {
        printf("%d",j);
    }
    for ( j = j-2; j >=1; j--)
    {
        printf("%d",j);
        
    }
    
    printf("\n");
}

}