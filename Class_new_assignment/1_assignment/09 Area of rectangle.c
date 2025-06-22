//09 area of rectangle
#include<stdio.h>
#include<conio.h>

float area(float, float);

int main()
{    
     float Hight=0.0, Width=0.0;
     
     printf("\n  Enter hight of rectangle: ");
     scanf("%f",&Hight);
     printf("\n  Enter width of rectangle: ");
     scanf("%f",&Width);
     
     float area(float Hight, float Width );
     
     printf("\n Area of rectange is %f",area(Hight,Width));
     
     getch();
     return 0;
}
float area(float Hight, float Width) 
{
   return Hight * Width ;

}
