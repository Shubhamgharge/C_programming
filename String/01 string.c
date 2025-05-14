#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

    char name[20]={'\0'};

    puts("enter a name :");
    gets(name);

    printf("\n name of student is => %s",name);
    getch();
    return 0;
}
