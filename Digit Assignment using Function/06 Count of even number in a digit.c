
/// Count of even  digit in a number


#include<stdio.h>
#include<conio.h>
int Digit_EvenCount(int);

int main()
{
    int iNum=0,iAns=0;

    printf("Enter a number : ");
    scanf("%d",&iNum);

    iAns=Digit_EvenCount(iNum);

    printf("\n Count of even digit  in < %d > : %d .",iNum,iAns);

    getch();
    return 0;
}
int Digit_EvenCount(int No)
{
    int eCount=0,dig=0;

    while(No > 0)
    {
        dig=No%10;

        if(dig % 2== 0 && dig != 0)
        {
            eCount++;

        }

        No=No/10;

    }
    return eCount;
}

