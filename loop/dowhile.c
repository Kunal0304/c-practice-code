#include<stdio.h>
void main()
{
    
    int start,end,i=0,s=0,s1=0,su=0,sum=0,ev=0,nv=0 ,fac=1;

    printf("enter start value -: ");
    scanf("%d",&start);
    printf("enter end value -: ");
    scanf("%d",&end);
 

do{
        fac=fac*start;

        i++;

        if (start%2==0)
        {
            sum=sum+start;
    printf("\n%d is even\n",start);     
    printf("sum of even %d + %d -: %d\n",start,s,sum);     
            s=sum;
            ev++;
        }
        else
        {
            su=su+start;
        printf("\n%d is odd\n",start);     
    printf("sum of odd %d + %d -: %d\n",start,s1,su);     
            s1=su;
            nv++;
        }
        
        start++;
        
}
    while (start<=end);
    printf(" total digits start to end -: %d\n",i);

    printf(" total even no. sum. -: %d\n",sum);     
    printf(" total even digits. -: %d\n",ev);

    printf(" total odd no. sum -: %d\n",su);     
    printf(" total odd digits -: %d\n",nv); 
    printf("%d is factorial start to end digits\n",fac);     

} 


