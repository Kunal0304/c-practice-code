#include<stdio.h>
void factorial();
void main()
{
    int a,b=1;
    printf("enter  any 3 number for factorial ");
    while (b<=3)
    {
        
    scanf("%d",&a);
    factorial(a); 
    b++;  
    }
    
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