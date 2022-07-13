#include<stdio.h>
void main()
{
    int a,t,j;
    printf("enter the number");
    scanf("%d",&a);
     
    printf("enter %d element of array\n",a);
    int ary[a],i;
    for (i = 0; i<a; i++)
    {
        scanf("%d",&ary[i]);
    }

    for (i=0; i<a; i++)
    {
            for (j=i+1; j<a; j++)
            {
                if (ary[i]>ary[j])
                {
                t=ary[i];
                ary[i]=ary[j];
                ary[j]=t;                
                }               
            }           
    }   
    printf("shorted array :- \n");    
    for (i = 0; i < a; i++)
    {        
        printf("%d\n",ary[i]);
    }    
}