#include<stdio.h>
void main()
{
    int start,end,i,j,c;
    printf("enter start number");
    scanf("%d",&start);

    printf("enter end number");
    scanf("%d",&end);


    for ( i = start; i <= end; i++)
    {

        for ( j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                break;
            }
            
        }
        if (i==j)
        {
                printf("%d is prime number",i);
            
        }
        else
        {
                printf("%d is NOT prime number",i);
            
        }
        
        printf("\n");
    }
    
}