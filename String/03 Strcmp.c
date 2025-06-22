/// program to find length of string.
#include<stdio.h>
#include<conio.h>

int main()
{
    char name[20]={'\0'};
    int i=0;

    printf("Enter a name : ");
    gets(name);

    printf("\n Given string is => %s",name);

    while(name[i] != '\0')
    {

        i++;
    }

    printf("\n The length of string is %d.",i);

    getch();
    return 0;
}
