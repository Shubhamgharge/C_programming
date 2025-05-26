
///02 Count of digits in given number

#include<stdio.h>
#include<conio.h>
int Digit_Count(int);

int main()
{

    int Num=0,Count=0;


    printf("Enter a number to count digits in number.");
    scanf("%d",&Num);
    Count=Digit_Count(Num);



    printf("\n Total digits in < %d >  = %d",Num,Count);

    getch();

    return 0;


}
int Digit_Count(int No)
{
    int dCount=0;
    while(No > 0)
    {
        No=No/10;
        dCount++;

    }


    return dCount;
}


