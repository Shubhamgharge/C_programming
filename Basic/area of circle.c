#include<stdio.h>
#include<conio.h>
int main()
{

    float r=0;
    const pi=3.14;

    printf("enter radius of circle : ");
    scanf("%f",&r);

    float area=0.0;

    area=pi*r*r;

    printf("area is %f ",area);

    getch();

}
