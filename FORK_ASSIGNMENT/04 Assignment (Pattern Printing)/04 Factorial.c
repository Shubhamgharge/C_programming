/////////////////////////////////////////////////////////////////////////////
//
///      04 Factorial of a number.
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int Factorial(int);

int main()
{

    int iNum=0,iAns=0;

    printf("Enter a number to calculate factorial : ");
    scanf("%d",&iNum);

    iAns=Factorial(iNum);


    printf("\n Factorial of %d is %d.",iNum,iAns);

    getch();
    return 0;
}
int Factorial(int No)
{
    int i=0,Fact=1;

   while(No>1)
   {
       Fact=Fact*No;

       No--;
   }
    return Fact;


}
