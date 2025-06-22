///count of upper case letters in string

#include<stdio.h>
#include<conio.h>

int main()
{
    char Sname[20]={'\0'};
    int i=0,upper_count=0;

    printf("Enter a string : ");
    gets(Sname);

    while(Sname[i] != '\0')
    {
        if(Sname[i] >= 'A' && Sname[i] <= 'Z')
        {
            upper_count++;
        }

        i++;
    }

    printf("Upper letter count in string : %d.",upper_count);

    getch();
    return 0;

}
