#include<stdio.h>
void main()
{
    int  a,i;
     printf("enter how many lines ");
    scanf("%d",&a);
 for ( i = 0; i < a; i++)
 {
     for (size_t j = 0; j <=i; j++)
     {
          printf("*");
     }
     printf("\n");
 }
 


}