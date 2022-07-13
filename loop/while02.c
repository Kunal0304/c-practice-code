#include<stdio.h>
void main()
{
    int a,b=1;
    printf("enter your no.");
    scanf("%d",&a);

    while(a>=1)
    {
        b=b*a;
    printf(" * %d\n",a);
    printf("%d\n",b);
    a--;
        
    }
    printf("factorial value is %d",b);
}  
