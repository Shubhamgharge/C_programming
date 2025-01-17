//////////////////////////////////////////////////////////////////////////////////////
//
///       20 Accept two numbers from user and swap their values.
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
void swap(int No1,int No2)
{
    int iTemp=0;

    iTemp=No1;
    No1=No2;
    No2=iTemp;

   printf("\n first number = %d.\n second number= %d.",No1,No2);
}
int main()
{
    int iNum1=0,iNum2=0;

    printf("Enter first number : ");
    scanf("%d",&iNum1);
    printf("Enter second number : ");
    scanf("%d",&iNum2);


    printf("\n\n Valuer befor swapping => \n");

    printf("First number = %d . \n Second number = %d.",iNum1,iNum2);

    printf("\n \n");
    swap(iNum1,iNum2);

   getch();
   return 0;
}
