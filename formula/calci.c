#include<stdio.h>
#include<conio.h>
int main()
{
    char oper,toper;
int a,b;
printf("we made calculator with the help of if else statement\n");

printf("enter any two number\n");

printf("enter first number=: \n");
printf(" number is =: ");
scanf("%d", &a);

fflush(stdin);
printf("enter operator\n");
printf(" operator=: ");
scanf("%c", &toper);

printf("enter second number=: \n");
printf(" number is =: ");
scanf("%d", &b);
 
if(toper =='+')
{
printf("value is=: %d\n",a+b);
}

else if(toper=='-')
{
printf("value is=: %d\n",a-b);
}
else if(toper=='*')
{
printf("value is=: %d\n",a*b);
}
else if (toper=='/')
{
printf("value is=: %d\n",a/b);
}

else
{
printf("something worng");
}

 }