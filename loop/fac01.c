#include<stdio.h>
void main()
{
  int start,end,sum=1,i,j,k;
//  printf("enter start number");
//     scanf("%d",&start);

//     printf("enter end number");
//     scanf("%d",&end);

    for ( i = 1; i <=5; i++)
    {
        for ( j = i; j<=5;j++)
        {
            
        printf("%d",j);
        for ( k = 1; k<j-1; k++)
        {
        printf("%d",k);

            sum=sum+j;
            
        }

        }
        

    printf("factorial of %d is = %d",i,sum);
    printf("\n");

        
    }
    

}