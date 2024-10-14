///swappingof two numbers without using temp variable
#include<stdio.h>
#include<conio.h>
int main()
{ 
    int Num1=0, Num2=0;
    
    printf("\n Enter 1st number : ");
    scanf("%d",&Num1);
    printf("\n Enter 2nd number : ");
    scanf("%d",&Num2);
     
     printf("\n 1st number after swapping = %d ",Num1);
     printf("\n 2nd number after swapping = %d",Num2);
   
    Num1=Num1 + Num2 ;
    Num2=Num1 - Num2 ;
    Num1=Num1 - Num2 ;
    printf("\n\n");
     printf("\n 1st number before swapping = %d ",Num1);
     printf("\n 2nd number before swapping = %d ",Num2);
     
     getch();
     return 0;
}