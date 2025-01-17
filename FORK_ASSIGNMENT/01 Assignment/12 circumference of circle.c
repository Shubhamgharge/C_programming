//////////////////////////////////////////////////////////////////////////////////////
//
///       12 circumference of circle.
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#define pi 3.14

float circum(float radius)
{
    float fRes=0.0;

    fRes=(radius*pi)*2;
    return fRes;
}
int main()
{

    float fRadius=0.0, fAns;

    printf("Enter Radius of circle : ");
    scanf("%f",&fRadius);

    fAns=circum(fRadius);

    printf("circumference of circle = %f.",fAns);

    getch();
    return 0;

}
