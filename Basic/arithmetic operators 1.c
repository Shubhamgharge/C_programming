///arithmetic operators 1
#include<stdio.h>
#include<conio.h>
int main()
{
   int Num1=0, Num2=0, sum=0, sub=0, multi=0, div=0, modul=0;
   
   printf("-----------*****---------------\n");
   
   printf(" \n Enter 1st number : ");
   scanf("%d",&Num1);
   printf(" \n Enter 2nd number : ");
   scanf("%d",&Num2);
   
   sum=Num1 + Num2;
   sub=Num1 - Num2;
   multi=Num1 * Num2;
   div=Num1 / Num2;
   modul=Num1 % Num2;
   printf("\n Addation of :       %d + %d = %d",Num1,Num2,sum );
   printf("\n Subtraction of :    %d - %d = %d ",Num1,Num2,sub);
   printf("\n Multiplication of : %d * %d = %d",Num1,Num2,multi );
   printf("\n Divition of :       %d / %d = %d ",Num1,Num2,div);
   printf("\n Modul Divition of : %d '%' %d = %d ",Num1,Num2,modul);
   
   
   printf("\n\n----------*****---------------");
   return 0;
}