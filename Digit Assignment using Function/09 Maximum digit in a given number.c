
/// Maximum digit in a number


#include<stdio.h>
#include<conio.h>
int Digit_Max(int);

int main()
{
    int iNum=0,iAns=0;

    printf("Enter a number : ");
    scanf("%d",&iNum);

    iAns=Digit_Max(iNum);

    printf("\n maximum digit  in < %d > : %d .",iNum,iAns);

    getch();
    return 0;
}
int Digit_Max(int No)
{
    int max=0,dig=0;

    while(No > 0)
    {
        dig=No%10;

        if(dig > max)
        {
             max=dig;
        }

        No=No/10;

    }
    return max;
}



