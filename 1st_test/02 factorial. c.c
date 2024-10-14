///02vfactorial
#include<stdio.h>
#include<conio.h>
int main()
{ 
    int Num1=0, Temp=0, Fact=1;
    
    printf("\n-----------------*******--------------------\n");
    printf("\n Enter  number for calculate factorial: ");
    scanf("%d",&Num1);
    
     Temp = Num1;
     
     while(Temp > 0)
     {
         Fact =Fact *Temp ;
         Temp--;
     }
   
    printf("\n\n");
     printf("\n factorial of %d = %d ", Num1,Fact);
     
    printf("\n----------------*******-----------------\n");
     getch();
     return 0;
}
