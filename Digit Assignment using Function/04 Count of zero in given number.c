/// Count  of zero '0'  in a Given number

#include<stdio.h>
#include<conio.h>
int Digit_zCount(int);

int main()
{
    int iNum=0,iAns=0;

    printf("Enter a number : ");
    scanf("%d",&iNum);

    iAns=Digit_zCount(iNum);

    printf("\n Count of zero '0' in < %d > : %d .",iNum,iAns);

    getch();
    return 0;
}
int Digit_zCount(int No)
{
    int zCount=0,dig=0;

    while(No > 0)
    {
        dig=No%10;
        if(dig == 0)
        {
            zCount++;
        }
        No=No/10;

    }
    return zCount;
}

