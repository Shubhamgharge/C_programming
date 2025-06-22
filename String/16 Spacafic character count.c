///Spacafic character count

#include<stdio.h>
#include<conio.h>

int main()
{

    char Sname[20]={'\0'};
    char letter='\0';
    int i=0,Char_count=0;

    printf("Enter a string : ");
    gets(Sname);

    printf("\n Enter a letter to the cout : ");
    scanf("%c",&letter);




    while(Sname[i] != '\0')
    {
        if(Sname[i] == letter)
        {
            Char_count++;
        }
        i++;
    }

    printf("Count is %d.",Char_count);

    getch();
    return 0;

}
