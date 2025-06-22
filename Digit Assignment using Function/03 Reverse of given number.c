/// Reverse of given number

#include<stdio.h>
#include<conio.h>
int Digit_reverse(int);

int main()
{

    int iNum=0,iAns=0;

    printf("Enter a number to reverse it : ");
    scanf("%d",&iNum);

    iAns=Digit_reverse(iNum);

    printf("\n Reverse of < %d > is %d .",iNum,iAns);

    getch();
    return 0;
}
int Digit_reverse(int No)
{
    int Rev=0;
    while(No > 0)
    {
        Rev=(Rev*10)+(No%10);
        No=No/10;
    }

    return Rev;

}
