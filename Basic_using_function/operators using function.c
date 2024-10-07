///arithmetic operators using function
#include<stdio.h>
#include<conio.h>
int calculator(int, int);
int main()
{
   int Num1=0, Num2=0;
   
   printf("-----------*****---------------\n");
   
   printf(" \n Enter 1st number : ");
   scanf("%d",&Num1);
   printf(" \n Enter 2nd number : ");
   scanf("%d",&Num2);
   
   calculater(Num1,Num2);
   
   printf("\n\n----------*****---------------");
   
   return 0;
}
int calculater(int Num1, int Num2)
{
   int N1=Num1, N2=Num2,sum=0, sub=0, multi=0, div=0, modul=0;
   
   sum=N1 + N2;
   sub=N1 - N2;
   multi=N1 * N2;
   div=N1 / N2;
   modul=N1 % N2;
   
   printf("\n Addation of :       %d + %d = %d",N1,N2,sum );
   printf("\n Subtraction of :    %d - %d = %d ",N1,N2,sub);
   printf("\n Multiplication of : %d * %d = %d",N1,N2,multi );
   printf("\n Divition of :       %d / %d = %d ",N1,N2,div);
   printf("\n Modul Divition of : %d '%' %d = %d ",N1,N2,modul);

}