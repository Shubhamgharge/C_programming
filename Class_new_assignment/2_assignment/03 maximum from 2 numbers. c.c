// 03 maximum from 2 numbers
#include<stdio.h>
#include<conio.h>
int find_max(int,int);

int main()
{
    int Num1=0,Num2=0;
    
    printf("\nEnter 1st number : ");
    scanf("%d",&Num1);
    printf("\nEnter 2nd number : ");
    scanf("%d",&Num2);
    
    find_max(Num1, Num2);
    
    getch();
    return 0;
}
int find_max(Num1, Num2)
{
    
       if(Num1 > Num2 ) 
       {
         printf("\n %d is maximum",Num1); 
       }
       else if(Num1 < Num2) 
       {
          printf("\n  %d is maximum. ",Num2);
       }
       
    

}