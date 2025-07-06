///Convert the string into lowercase

#include<stdio.h>
#include<conio.h>

int main()
{

    char Sname[20]={'\0'};
    int i=0;

    printf("Einter a string : ");
    gets(Sname);

    printf("String before convert : %s \n ", Sname);

    while(Sname[i] != '\0')
    {

        if(Sname[i]>= 'A' && Sname[i]<= 'Z')
        {
            Sname[i] = Sname[i] + 32;
        }
        i++;
    }

    printf("String after convert : %s",Sname);

    getch();
    return 0;
}
