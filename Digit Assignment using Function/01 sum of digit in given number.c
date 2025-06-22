///Sum of digits in a given number

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0,Sum=0;

    printf("\n Enter a Number : ");
    scanf("%d",&Num);

    Sum=Digit_Sum(Num);

    printf("\n\n Sum of all digits in %d is %d",Num,Sum);

    getch();
    return 0;
}
int Digit_Sum(int No)
{
    int i=0,dig=0,sum=0;

    while(No > 0 )
    {
        dig= No % 10;
        sum=sum+ dig;
        No = No/10;

    }
    return sum;
}
