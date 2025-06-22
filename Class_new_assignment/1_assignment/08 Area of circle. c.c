//08 area of circle
#include<stdio.h>
#include<conio.h>
#define pi 3.14
float area(float);

int main()
{    
     float radius=0.0;
     
     printf("\n  Enter radius of circle : ");
     scanf("%f",&radius);
     
     float area(float radius);
     
     printf("\n Area of circle which radius %f is %f",radius,area(radius));
     getch();
     return 0;
}
float area(float radius) 
{
   return pi*radius*radius;

}
