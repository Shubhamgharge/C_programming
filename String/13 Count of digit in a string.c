///count of digit in a string

#include<stdio.h>
#include<conio.h>

int main()
{
    char Sname[20]={'\0'};
    int i=0,dig_count=0;

    printf("Enter a string : ");
    gets(Sname);

    while(Sname[i] != '\0')
    {
        if(Sname[i] >= '0' && Sname[i] <= '9')
        {
            dig_count++;
        }

        i++;
    }

    printf("Digit count in string : %d.",dig_count);

    getch();
    return 0;


}
