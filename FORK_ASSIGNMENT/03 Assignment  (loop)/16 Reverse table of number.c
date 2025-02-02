
////////////////////////////////////////////////////////////////////////
//
///      16 Reverse Table of given number.
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void Table(int);

int main()
{
    int iNum=0;

    printf("Enter a number for its Table : ");
    scanf("%d",&iNum);

    Table(iNum);

    getch();
    return 0;
}
void Table(No)
{
    int i=0;


    for(i=10 ; i>=1 ;i--)
    {

        printf(" %d * %d = %d \n",No,i,(No*i));

    }

    getch();
    return 0;
}

