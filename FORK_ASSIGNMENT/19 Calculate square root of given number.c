//////////////////////////////////////////////////////////////////////////////////////
//
///       19 Accept number from usre and calculate square root.
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<math.h>

int square_root(int No)
{
    int iRes=0;

    iRes=sqrt(No);
    return iRes;

}
int main()
{
    int iNum=0, iAns=0;

    printf("Enter a number to calculare it's square root : ");
    scanf("%d",&iNum);

    iAns=square_root(iNum);

    printf("Square root of %d = %d.",iNum,iAns);

    getch();
    return 0;
}
