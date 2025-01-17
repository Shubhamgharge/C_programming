//////////////////////////////////////////////////////////////////////////////////////
//
///       18 Accept number from user and display its cube.
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int cube(int No)
{
    int iRes=0;

    iRes=No*No*No;
    return iRes;
}
int main()
{

    int iNum=0,iAns=0;

    printf("Enter a number to calculate it's cube : ");
    scanf("%d",&iNum);

    iAns=cube(iNum);

    printf("Cube of %d = %d",iNum,iAns);

    getch();
    return 0;

}
