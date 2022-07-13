#include<stdio.h>
#include<string.h>

void main()
{
    int a;
    printf("enter a four digit car number\n");
    scanf("%d",&a);
    if (a%2==0)
    {
        goto evncar;
    }
    else
    {
        goto oddcar;
    }
        evncar:
        printf("today your turn\n");
        return;
        oddcar:
        printf("today is not your turn\n");
}