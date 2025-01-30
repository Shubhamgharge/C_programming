////////////////////////////////////////////////////////////////////////
//
///      08 Print letters in useer range.
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void Range(char,char);

int main()
{
    char Stch='\0',Ench='\0';

    printf("Enter Starting character : ");
    scanf("%c",&Stch);
    printf("Enter Ending Character : ");
    scanf("%ch",&Ench);

    Range(Stch,Ench);

    getch();
    return 0;

}
 Range(Start,End)
{
    while(Start<=End)
    {
        printf("%c ",Start);
        Start++;
    }
}
