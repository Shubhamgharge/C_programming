// 04 maximum from 3 numbers
#include<stdio.h>
#include<conio.h>

int find_max(int,int, int);

int main()
{
    int Num1=0, Num2=0, Num3=0;
    
    printf("\nEnter 1st number : ");
    scanf("%d",&Num1);
    printf("\nEnter 2nd number : ");
    scanf("%d",&Num2);
    printf("\nEnter 2nd number : ");
    scanf("%d",&Num3);
    
    find_max(Num1, Num2, Num3);
    
    getch();
    return 0;
}
int find_max(Num1, Num2, Num3)
{
    
       if(Num1 > Num2 && Num1 > Num3) 
       {
         printf("\n %d is maximum",Num1); 
       }
       else if(Num2 > Num1 && Num2 > Num3) 
       {
          printf("\n  %d is maximum. ",Num2);
       }
       else if(Num3 > Num1 && Num3 >Num2) 
       {
          printf("\n %d is maximum.",Num3);
       }
       
       
}