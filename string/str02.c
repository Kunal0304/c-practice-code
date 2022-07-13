#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char nm[5]="heLLo";
    // char sec1[5];
    char *c;
    // strcpy(sec1,nm);
    // strupr(nm);
    // strlwr(nm);
    // i=strlen(nm);
    // strcat(nm, " kunal");
    // printf("%s\n",sec1);
    // strrev(nm);
    // printf("%s",nm);

    c=strchr(nm ,'z');
    printf("%c",*c);
}