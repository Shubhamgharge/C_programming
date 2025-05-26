
/// Count of odd digit in a number


#include<stdio.h>
#include<conio.h>
int Digit_OddCount(int);

int main()
{
    int iNum=0,iAns=0;

    printf("Enter a number : ");
    scanf("%d",&iNum);

    iAns=Digit_OddCount(iNum);

    printf("\n Count of zodd digit  in < %d > : %d .",iNum,iAns);

    getch();
    return 0;
}
int Digit_OddCount(int No)
{
    int oCount=0,dig=0;

    while(No > 0)
    {
        dig=No%10;

        if(dig % 2== 1 )
        {
            oCount++;

        }

        No=No/10;

    }
    return oCount;
}


