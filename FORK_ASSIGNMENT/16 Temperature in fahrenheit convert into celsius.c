//////////////////////////////////////////////////////////////////////////////////////
//
///       16 Accept temperature in fahrenheit and convert into celsius .
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

float calsius(float temperature)
{
   float fRes=0.0;

   fRes= (temperature-32)*0.55;
   return fRes;

}
int main()
{

    float ftemperature=0.0, fAns=0.0;

    printf("Enter temperature in fahrenheit : ");
    scanf("%f",&ftemperature);


    fAns=calsius(ftemperature);

    printf("%0.2f fahrenheit = %0.2f celsius ",ftemperature,fAns);

    getch();
    return 0;

}


