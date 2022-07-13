#include<stdio.h>
#include<conio.h>
void main()
{
  int  M;
printf("enter the marks=: ");
scanf("%d",&M);

if (M<=100&&M>=85)
{
printf("your marks is A very good");
}
else if (M<85&&M>=65)
{
printf("your grade is B good ");
}
else if (M<65&&M>=45)
{
printf("your grade is C average");
}
else if (M<45&&M>=33)
{
printf("your grade is D low");
}
else if(M<33&&M>=0)
{
printf("your grade is E very low");    
}

else
{
printf("plzz enter correct marks");   
}

}