#include<stdio.h>
void main()
{
int p,r,t;
float si;
printf("use for simple interest find \n");
printf("put the value of principle amount \n");
scanf("%d", &p);
printf("put the value of interest rate \n");
scanf("%d", &r);
printf("put the value of time interval \n");
scanf("%d", &t);
si=p*r*t/100;
printf("simple interest is=: %f",si);
}