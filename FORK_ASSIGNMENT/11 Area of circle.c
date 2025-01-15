//////////////////////////////////////////////////////////////////////////////////////
//
///       11 Area of circle.
//
////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#define pi 3.14
float circle(float radius)

{
    float fRes=0.0;
    fRes=pi*radius*radius;
    return fRes;                      //3.14*5*5=78.5
}
int main()
{

    float fRadius=0.0 ,fAns=0.0;

    printf("Enter Radius of circle : ");
    scanf("%f",&fRadius);                 //5

    fAns=circle(fRadius);

    printf("Area of circle %f which radius is %f ",fRadius,fAns);
    getch();
    return 0;

}
