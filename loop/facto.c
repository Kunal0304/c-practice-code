#include<stdio.h>
void main()
{
int a,i,fac=1;
printf("we find the factorial this program \n \n");
printf("enter the number\n");
scanf("%d",&a);
for ( i = 1; i<=a; i++)
{
    fac=fac*i;
}

printf("the number factorial is =: %d",fac);

}