//10 distance in km convert into meters
#include<stdio.h>
#include<conio.h>

float road(float);

int main()
{    
     float distance=0.0; 
     
     printf("\n  Enter distance in kilometre : ");
     scanf("%f",&distance);
   
     float road(float distance);
     
     printf("\n Distance in meters %f",road(distance));
     
     getch();
     return 0;
}
float road(float distance) 
{
    float convert =0.0;
    
    convert=distance*1000;
   return convert;

}