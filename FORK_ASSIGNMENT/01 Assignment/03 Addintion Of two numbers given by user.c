
//////////////////////////////////////////////////////////////////////////////////////
//
//       03 Accept two numbers from user and display addation.
//
////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

int Add(int N1, int N2 )
{

   return N1+N2;

}
int main()
{
    int Num1=0,Num2=0,Ans=0;

    printf("Enter first number : \n");
    scanf("%d",&Num1);
    printf("Enter second number : ");
    scanf("%d",&Num2);

    Ans=Add(Num1,Num2);

    printf("Addation Of %d + %d = %d .",Num1,Num2,Ans);

    getch();
    return 0;
}
