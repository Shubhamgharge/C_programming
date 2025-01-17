////////////////////////////////////////////////////////////////////////
//                                                                    //
///      05 Check given number is divisidal by 7 or not.            //
//                                                                    //
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void Check1_divisible(int No)
{
    if(No%7==0)
    {
        printf("\n %d is divisibleby 7 .",No);
    }
    else
    {
        printf("%d is not divisible by 7",No);
    }
}
int main()
{
    int iNum=0;

    printf("\n Enter a number to check number is divisible by 7 or not : ");
    scanf("%d",&iNum);

    Check1_divisible(iNum);

    getch();
    return 0;
}


