#include<stdio.h>
void main()
{
    int a=0,b=1,c,t,i;
    printf("enter number of terms");
    scanf("%d",&t);
    if (t==1)
    {
        printf("%d\n",a);
    }
    
    else if (t==2)
    {
        printf("%d\n",a);
        printf("%d\n",b);

    }

    else
    {
         printf("%d\n",a);
        printf("%d\n",b);
        for ( i = 0; i <=t-2; i++)
        {
            c=a+b;
            printf("%d\n",c);
            a=b;
            b=c;
        }
        
    }

}
    