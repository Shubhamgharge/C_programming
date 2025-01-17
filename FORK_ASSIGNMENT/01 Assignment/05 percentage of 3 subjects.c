//////////////////////////////////////////////////////////////////////////////////////
//
///       05 Accept Marks of 3 subject and display total and percentage.
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

float Per(float No1, float No2 ,float No3)
{
      return ((No1+No2+No3)/3);

}
int main()
{
    float fSubject1=0.0 ,fSubject2=0.0, fSubject3=0.0;

    printf("Enter First subject marks : ");
    scanf("%f",&fSubject1);
    printf("\n Enter second subject marks : ");
    scanf("%f",&fSubject2);
    printf("\n Enter third subject marks : ");
    scanf("%f",&fSubject3);


    printf("Total marks of 3 subjects :%0.2f \n",fSubject1+fSubject2+fSubject3);
    printf("Percentage = %0.2f",Per(fSubject1,fSubject2,fSubject3));

    getch();
    return 0;

}
