#include<stdio.h>
void factorial();
void main()
{
    int a;
    printf("enter number for factorial ");
    scanf("%d",&a);
    factorial(a);   
}
void factorial(int a)
{
    int i,s=1;
    for ( i = 1; i <=a; i++)
    {
        s=s*i;
    }
    printf("factorial is -: %d ",s);
    
    
}