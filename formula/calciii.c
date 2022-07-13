#include<stdio.h>
void main()
{
    int a,b;
    char c;
    printf("we made calculator with the help of swich\n\n");
    printf("enter first value\n");
    scanf("%d",&a);
    fflush(stdin);
    printf("enter operator value\n");
    scanf("%c",&c);
    printf("enter second value\n");
    scanf("%d",&b);

    switch (c)
    {
    case '+':
    printf("your value is = %d",a+b);
        break;
    
    case '-':
    printf("your value is = %d ",a-b);
        break;

    case '*':
    printf("your value is = %d ",a*b);
        break;

    case '/':
    printf("your value is = %d ",a/b);
        break;    
    default:
    printf("something went worng");

        break;
    }

}