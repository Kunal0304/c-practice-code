#include<stdio.h>
#include<string.h>
void main(){
    int ch;
     char name[20];
     s1:
     printf("enter  full name\n");
     scanf("%s",&name);
     printf("welcome %s\n",name);
     printf("press '1' for more name\n");
     scanf("%d",&ch);

     if (ch==1)
     {
         goto s1;
     }

}