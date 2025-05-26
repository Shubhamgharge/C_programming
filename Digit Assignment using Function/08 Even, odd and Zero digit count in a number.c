/// Even, odd and Zero digit count in a number

#include<stdio.h>
#include<conio.h>
void Digit_EvenoddzeroCount(int);

int main()
{
    int iNum=0;

    printf("Enter a number : ");
    scanf("%d",&iNum);

    Digit_EvenoddzeroCount(iNum);


    getch();
    return 0;
}
void Digit_EvenoddzeroCount(int No)
{
    int eCount=0,oCount=0,zCount=0,dig=0,temp=0;

    temp = No;

    while(temp > 0)
    {
        dig=temp%10;

        if(dig == 0 )
        {
            zCount++;

        }
        else if(dig %2 == 0)
        {
            eCount++;
        }
        else
        {
            oCount++;

        }

        temp=temp/10;

    }

    printf("\n Even Digit Count in < %d > is %d.",No,eCount);
    printf("\n Odd digit count in < %d > is %d .",No,oCount);
    printf("\n Zero '0' count in < %d > is %d .",No,zCount);

    return ;
}

