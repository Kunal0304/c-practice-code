#include<stdio.h>
void main()
{

int a,b,i,ev=0,nv=0;

printf("enter start value loop = ");
scanf("%d",&a);


printf("enter end value loop = ");
scanf("%d",&b);

for( i = a; i <=b; i++)
{

        if (i%2==0)
        {
            ev++;
            
        }
        else
        {
            nv++;
            
        }
        
        
}
 
printf("total odd value is %d and even is %d",ev,nv);

}