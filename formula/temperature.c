#include<stdio.h>
#include<conio.h>
void main()
{
int  t;
printf("enter the temperature level=: ");
scanf("%d",&t);

if (t>=0&&t<10)
{
printf("your temperature is very cold"); 
}

else if (t>=10&&t<20)
{
printf("your temperature is cold");
}

else if (t>=20&&t<30)
{
printf("your temperature is normal"); 
}

else if (t>=30&&t<40)
{
printf("your temperature is heat up");
}

else
{
printf("your temperature is warm");
}


}
     