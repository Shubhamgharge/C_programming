/// simple nested if-else (mall) 
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
      
      if(amount > 1000) 
      {
        printf("\n\nYou can be prime member of this mall..!!");
      }
    }
 //   printf("\n\t!!..Have a nice shopping..!!");
    else
    {
      printf("\nMinmum balance required to shop is 1000!!");
      
      if(amount > 500) 
      {
        printf("\n\n!!..But you can visit our outlet at cournee..!!");
      }
      else
      {
        printf("\n\n You are not eligible for showing in this mall...");
      }
    }
     getch();
     
    printf("\n\n Thank you for visit!!");
 
   printf("\n\n----------*****---------------");
   getch();
   return 0;
   
}
