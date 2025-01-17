//////////////////////////////////////////////////////////////////////////////////////
//
///      13 Area of square .
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

float Area(float side)
{
   float fRes=0.0;

   fRes=side*side;
   return fRes;

}
int main()
{

    float fSide=0.0, fAns=0.0;

    printf("Enter side of square : ");
    scanf("%f",&fSide);

    fAns=Area(fSide);

    printf("Area of square = %0.2f",fAns);

    getch();
    return 0;


}

