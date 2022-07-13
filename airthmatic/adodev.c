#include<stdio.h>
void main()
{

int a,b,i,ev=0,nv=0,n=0,no=0;

printf("enter start value loop = ");
scanf("%d",&a);


printf("enter end value loop = ");
scanf("%d",&b);

for ( i = a; i <=b; i++)
{
        if (i%2==0)
        {
                printf("%d ,",i);
                ev++;
                n=n+i;
        }
        else
        {

                nv++;
                 no=no+i; 
                
                printf(" \n%d ,",i);

        }      

}
            printf("\n");
            printf("total even digits is %d\n",ev);
            printf("addiion of even value is %d\n\n",n);
            printf("total odd digits is %d\n",nv);
            printf("addiion of odd value is %d\n",no);
 
}