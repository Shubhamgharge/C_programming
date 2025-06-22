

/// Minimum digit in a number


#include<stdio.h>
#include<conio.h>
int Digit_Min(int);

int main()
{
    int iNum=0,iAns=0;

    printf("Enter a number : ");
    scanf("%d",&iNum);

    iAns=Digit_Min(iNum);

    printf("\n maximum digit  in < %d > : %d .",iNum,iAns);

    getch();
    return 0;
}
int Digit_Min(int No)
{
    int min=9,dig=0;

    if(No==0)
    {
        min=0;
    }
    else
    {
        while(No > 0)
        {
            dig=No%10;

            if(dig<min)
            {
               min=dig;
            }

        No=No/10;

       }
    }
    return min;
}



