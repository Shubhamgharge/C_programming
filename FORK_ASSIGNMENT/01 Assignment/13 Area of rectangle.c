//////////////////////////////////////////////////////////////////////////////////////
//
//       13 Area of rectangle .
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

float Area(float height, float width)
{
   float fRes=0.0;

   fRes=height*width;
   return fRes;

}
int main()
{

    float fHeight=0.0, fWidth=0.0, fAns=0.0;

    printf("Enter height of rectangle : ");
    scanf("%f",&fHeight);
    printf("Enter width of rectangle :");
    scanf("%f",&fWidth);

    fAns=Area(fHeight, fWidth);

    printf("Area of rectangle = %f",fAns);

    getch();
    return 0;


}
