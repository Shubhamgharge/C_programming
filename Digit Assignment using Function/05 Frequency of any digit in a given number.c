/// frequency of Given digit in a number

#include<stdio.h>
#include<conio.h>
int Digit_Frequency(int,int);

int main()
{
    int iNum=0,iAns=0,iFrequency=0;

    printf("Enter a number : ");
    scanf("%d",&iNum);

    printf("\n Enter digit to find it's frequency : ");
    scanf("%d",&iFrequency);

    iAns=Digit_Frequency(iNum,iFrequency);

    printf("\n Count of %d in < %d > : %d .",iFrequency,iNum,iAns);

    getch();
    return 0;
}
int Digit_Frequency(int No,int num)
{
    int Count=0,dig=0;

    while(No > 0)
    {
        dig=No%10;
        if(dig == num)
        {
            Count++;
        }
        No=No/10;

    }
    return Count;
}

