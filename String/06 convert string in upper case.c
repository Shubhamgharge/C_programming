/// convert the given string in uppercase

#include<stdio.h>
#include<conio.h>

int main()
{
    char Sname[20]={'\0'};

    int i=0;

    printf("\n Enter a string to convert into uppercase : ");
    gets(Sname);

    printf("String before convert => %s ",Sname);

    while(Sname[i] != '\0')
    {
        if(Sname[i]>= 'a' && Sname[i]<= 'z')
        {
            Sname[i] = Sname[i] - 32;
        }
        i++;

    }
    printf("\n String after convert : %s ",Sname);

    getch();
    return 0;
}
