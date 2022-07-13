#include<stdio.h>
void main()
{
    int c=0,s;
    printf("enter the no = ");
    scanf("%d",&s);
    printf("enter %d element :-\n",s);
    int ary[s],i,j;
    for ( i = 0; i < s; i++)
    {
        scanf("%d",&ary[i]);
    }
    printf("repated elements are :- \n");
    for ( i = 0; i < s; i++)
    {
        for ( j = i+1; j < s; j++)
        {
            if (ary[i]==ary[j])
            {
                printf("%d\n",ary[i]);
                break;
            }
            
        }
        
    }
    
    
}