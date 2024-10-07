///area & perimeter of rectangle using unction
#include<stdio.h>
#include<conio.h>
int area_peri(float, float);

int main()
{
   float length=0,breadth=0l;
   
   printf("-----------*****---------------\n");
   
   printf(" \n Enter length of rectangle : ");
   scanf("%f",&length);
   printf(" \n Enter breadth of rectangle : ");
   scanf("%f",&breadth);
   
   area_peri(length,breadth);
   
   printf("\n\n----------*****---------------");
   getch();
   return 0;
   
}
int area_peri(float length, float breadth) 
{
  float l=length,b=breadth;
  
  printf("\n area of rectangle is      : %0.2f",l*b);
  printf("\n perimeter of rectangle is : %0.2f",2*(l*b));
}