//////////////////////////////////////////////////////////////////////////////////////
//
//       04 Accept two numbers from user and display Multiplication.
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int Multi(int N1 , int N2)
{
   return N1*N2;
}
int main()
{

    int iNum1=0,iNum2=0,Ans=0;

    printf("Enter First Number : \n");
    scanf("%d",&iNum1);
    printf("Enter Second Number \n ");
    scanf("%d",&iNum2);

    Ans=Multi(iNum1 ,iNum2);

    printf("Multiplication of %d * %d = %d",iNum1,iNum2,Ans);

    getch();
    return 0;
}
