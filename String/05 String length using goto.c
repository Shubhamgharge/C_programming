///Length of string using goto

#include<stdio.h>
#include<conio.h>

int main()
{

    char Sname[20]={'\0'};
    int i=0;

    printf("Enter a string : ");
    gets(Sname);
    up:
    if(Sname[i] != '\0')
    {
        i++;
        goto up;
    }

    printf("The length of String < %s > is %d ",Sname,i);

    getch();
    return 0;
}
