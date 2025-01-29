////////////////////////////////////////////////////////////////////////
//
///      03 WAP that accept nmber frio  user and print * of that number.
//
//////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

int main()
{

    int No=0;

    printf("Enter a number to print star : ");
    scanf("%d",&No);

    for(int i=1 ; i<= No ;i++)
    {

        printf(" * ");
    }
    getch();
    return 0;
}
