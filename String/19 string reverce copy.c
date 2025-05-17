/// String reverce copy

#include<stdio.h>
#include<conio.h>

int main()
{
    char Sname[25]={'\0'};
    char Dcopy[25]={'\0'};
    char ch={'\0'};

    int i=0,j=0;

    printf("\n Enter a string : ");
    gets(Sname);

    printf("\n\n String after reverce < %s >",Sname);
    while(Sname[i] != '\0')
    {
        i++;
    }
    i--;

    while(i>j)
    {
        ch=Sname[i];
        Sname[i]=Sname[j];


        j++;
        i--;
    }

    printf("\n\nString before reverse < %s >",Sname);

    getch();
    return 0;

}
