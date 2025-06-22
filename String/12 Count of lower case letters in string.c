///Count of lower case letters in string

#include<stdio.h>
#include<conio.h>

int main()
{
    char Sname[20]={'\0'};
    int i=0,lower_count=0;

    printf("Enter a string : ");
    gets(Sname);

    while(Sname[i] != '\0')
    {
        if(Sname[i] >= 'a' && Sname[i] <= 'z')
        {
            lower_count++;
        }

        i++;
    }

    printf("Lowercase letter count in string : %d.",lower_count);

    getch();
    return 0;


}
