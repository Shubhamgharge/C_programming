///toggle case string

#include<stdio.h>
#include<conio.h>

int main()
{
    char Sname[20]={'\0'};
    int i=0;

    printf(" Enter a string : ");
    gets(Sname);

    printf("----------------------------------\n");

    printf(" String before toggle : %s",Sname);

    while( Sname[i] != '\0' )
    {
        if(Sname[i] >= 'a' && Sname[i] <='z')
        {
            Sname[i]= Sname[i] - 32;

        }
        else if(Sname[i] >= 'A' && Sname[i] <='Z')
        {
            Sname[i] = Sname[i] +32;

        }

        i++;
    }

    printf("\n String after togglecase : %s ",Sname);

    getch();
    return 0;

}
