/// simple if (mall) 
#include<stdio.h>
#include<conio.h>

int main()
{
   float amount=0.0;
   
   printf("-----------*****---------------\n");
   
   printf(" \n Enter your Account balance : ");
   scanf("%f",&amount);
    
    if(amount > 1000)
    {
      printf("\n\n\t WELCOME TO MALL");
      printf("\n\n\t Enjoy Your Shopping!!\n");
    } 
    
    printf("\n Thank you for visit!!");
 
   printf("\n\n----------*****---------------");
   getch();
   return 0;
   
}
