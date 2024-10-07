///square and cube 2
#include<stdio.h>
#include<conio.h>
int main()
{
   int Num=0,square=0,cube=0;
   
   printf("-----------*****---------------\n");
   
   printf(" \n Enter number to calculate square and cube : ");
   scanf("%d",&Num);
   
   printf("\n square of : %d = %d",Num,( Num * Num ));
   printf("\n cube of   : %d = %d ",Num,( Num * Num * Num));
   
   printf("\n\n----------*****---------------");
   return 0;
}