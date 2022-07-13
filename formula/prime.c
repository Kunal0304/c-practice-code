#include<stdio.h>
void main()
{
int n,i,c=0;
printf("enter a no.");
scanf("%d",&n);

 if (n==0||n==1)
 {
    printf(" number is not prime");
     
 }
 else
 {
    int i=2;
 while(i < n)
 {
    if (n%i==0)
    {
        c++;
        break;
    }  
    i++; 
 }
   if (c==0)
{
    printf(" number is prime");
}
 else
 {
    printf(" number is not prime");
     
 }
 
 }
 
   
}

 
 
