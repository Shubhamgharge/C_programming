///area and perimeter of circle using function
#include<stdio.h>
#include<conio.h>
#define pi 3.14f
int area_peri(float);

int main()
{
   float r=0,area=0,perimeter=0;
   
   printf("-----------*****---------------\n");
   
   printf(" \n Enter radius to calculate area and perimeter of circle : ");
   scanf("%f",&r);
   
   area_peri(r);
   
   printf("\n\n----------*****---------------");
   getch();
   return 0;
   
}
int area_peri(float r) 
{
  float no=r, area=0,perimeter=0;
  
  area = pi* no *no ;
  perimeter = 2*pi *r;
  
  printf("\n area of circle is      : %0.2f",area);
  printf("\n perimeter of circle is : %0.2f",perimeter);
}
