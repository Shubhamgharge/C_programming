////////////////////////////////////////////////////////////////////////
//
///      02 check a given number is posativ or negativ.
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void Check_Number(int No)
{
     if(No==0)
     {
        printf("\n Given number is nutral");

     }
     else if(No>0)
     {
         printf(" \n %d is posative number.",No);
     }
     else
     {
         printf(" \n %d is negative Number.",No);

     }
}
int main()
{
    int iNum=0;

    printf("Enter a number to check number is posative or negative : ");
    scanf("%d",&iNum);

    Check_Number(iNum);

    getch();
    return 0;
}

