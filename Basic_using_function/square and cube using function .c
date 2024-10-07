///square and cube using function
#include<stdio.h>
#include<conio.h>
int square_cube(int);
int main()
{
   int Num=0,square=0,cube=0;
   
   printf("-----------*****---------------\n");
   
   printf(" \n Enter number to calculate square and cube : ");
   scanf("%d",&Num);
   
   square_cube( Num);
   
   printf("\n\n----------*****---------------");
   return 0;
}
int square_cube(int Num) 
{
  int No=Num;
  
  printf("\n square of : %d = %d",No,( No * No ));
  printf("\n cube of   : %d = %d ",No,( No * No * No));

}