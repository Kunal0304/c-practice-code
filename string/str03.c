#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char num[]="hello",num1[5];
   printf("enter a string");
   gets(num1);
   char *c=NULL;
   c=strchr(num,'z');
//    c=strstr(num,num1);
   if (c==NULL)
   {
       printf("not found");
   }

else
{
    for ( i = 0; i < strlen(num1); i++)
    {
        printf("%c",*c);
        c++;
    }
    
}

}