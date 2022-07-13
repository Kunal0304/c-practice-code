#include<stdio.h>
void square();
void main()
{
    int a;
    printf("enter no for square ");
    scanf("%d",&a);
    square(a);
}
void square(int a)
{
    printf("square of %d is -: %d",a,a*a);
}