////////////////////////////////////////////////////////////////////////
//
///      10 Calculate Sum of 10 numbers given by user,
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int sum();

int main()
{
    int iAns=0;

   iAns= sum();

   printf("\n Sum = %d",iAns);
    getch();
    return 0;
}
int sum()
{
    int i=0,sum=0,no=0;
    printf("Enter 10 numbers for sum.\n");

    for(i=1 ; i<=5 ;i++)
    {

        scanf("%d",&no);

        sum+=no;
    }
    return sum;

    getch();
    return 0;
}
