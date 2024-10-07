///area & perimeter of rectangle
#include<stdio.h>
#include<conio.h>

int main()
{
   float length=0,breadth=0;
   
   printf("-----------*****---------------\n");
   
   printf(" \n Enter length of rectangle : ");
   scanf("%f",&length);
   printf(" \n Enter breadth of rectangle : ");
   scanf("%f",&breadth);
   
   
   printf("\n area of rectangle is      : %0.2f",length*breadth);
   printf("\n perimeter of rectangle is : %0.2f",2*(length*breadth));
   
   printf("\n\n----------*****---------------");
   getch();
   return 0;
   
}
