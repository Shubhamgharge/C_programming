//12 Accept two numbers from user and display first number in second number of times.
#include<stdio.h>
#include<conio.h>
int number(int N1,int N2)
{
     int icnt=0;
     for(icnt=1 ; icnt<=N2 ;icnt++)
     {
        printf(" %d ",N1);
     }


}
int main()
{
     int Num1=0, Num2=0 ;
     
     printf("\n Enter 1st Numbers : ");
     scanf("%d",&Num1);
     printf("\n Enter 2nd Numbers : ");
     scanf("%d",&Num2);
     
     number(Num1,Num2);
     
     getch();
     return 0;
}