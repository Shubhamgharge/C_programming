///arithmetic operators 2
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
   
   
   printf("\n Addation of :       %d + %d = %d",Num1,Num2,(Num1 + Num2) );
   printf("\n Subtraction of :    %d - %d = %d ",Num1,Num2,(Num1 - Num2));
   printf("\n Multiplication of : %d * %d = %d",Num1,Num2,(Num1 * Num2));
   printf("\n Divition of :       %d / %d = %d ",Num1,Num2,(Num1 / Num2));
   printf("\n Modul Divition of : %d  %d = %d ",Num1,Num2,(Num1 % Num2));
   
   
   printf("\n\n----------*****---------------");
   return 0;
}
