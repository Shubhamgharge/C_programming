//////////////////////////////////////////////////////////////////////////////////////
//
///       17 Accept number from user and display its square .
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int square(int No)
{
    int iRes=0;

    iRes=No*No;
    return iRes;
}
int main()
{
    int iNum=0, iAns=0;

    printf("Enter number to calculate its square : ");
    scanf("%d",&iNum);

    iAns=square(iNum);

    printf("Square of %d = %d.",iNum,iAns);

    getch();
    return 0;

}
