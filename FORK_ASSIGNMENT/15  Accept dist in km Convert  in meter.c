//////////////////////////////////////////////////////////////////////////////////////
//
///      15 Accept distance in kilometer and convert into meter .
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

float meter(float distance)
{
   float fRes=0.0;

   fRes= distance*1000;
   return fRes;

}
int main()
{

    float fDistance=0.0, fAns=0.0;

    printf("Enter Distance in kilometer to convert it into meter : ");
    scanf("%f",&fDistance);


    fAns=meter(fDistance);

    printf("%0.2f kilometer  = %0.2f meter ",fDistance,fAns);

    getch();
    return 0;


}

