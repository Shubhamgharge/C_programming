////////////////////////////////////////////////////////////////////////
//                                                                    //
///      07 Check given number is even or odd uding ternory.            //
//                                                                    //
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void Check_Even(int No)
{
   (No%2==0)?printf("\n %d is even.",No):printf("%d is odd",No);

}
int main()
{
    int iNum=0;

    printf("\n Enter a number to check number is even or odd : ");
    scanf("%d",&iNum);

    Check_Even(iNum);

    getch();
    return 0;
}



