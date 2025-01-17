////////////////////////////////////////////////////////////////////////
//
///      01 check a given number is even or odd.
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void Check_Even(int No)
{
     if(No==0)
     {
        printf("Given number is nutral");

     }
     else if(No%2==0)
     {
         printf(" \n %d is Even number.",No);
     }
     else
     {
         printf(" \n %d is Odd Number.",No);

     }
}
int main()
{
    int iNum=0;
    //down;
    printf("Enter a number to check number is even or odd : ");
    scanf("%d",&iNum);

    Check_Even(iNum);

    getch();
    return 0;
}
