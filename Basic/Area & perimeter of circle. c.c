///area & perimeter of circle
#include<stdio.h>
#include<conio.h>

int main()
{
   float radius=0,pi=3.14;
   
   printf("-----------*****---------------\n");
   
   printf(" \n Enter radius of circle : ");
   scanf("%f",&radius);

   
   printf("\n area of rectangle is      : %0.2f",pi*radius*radius);
   printf("\n perimeter of rectangle is : %0.2f",2*(pi*radius));
   
   printf("\n\n----------*****---------------");
   getch();
   return 0;
   
}
