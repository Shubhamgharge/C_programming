//////////////////////////////////////////////////////////////////////////////////////
//
///       20 Accept two numbers from user and swap their values.
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
void swap(int No1,int No2,int No3)    ///No1=2     No2=3
{
    int iTemp=0;

    iTemp=No1;
    No2=No3;
    No3=iTemp;

   printf("\n\n Values after swapping =>");
   printf("\n A = %d.\n B = %d. \n C = %d ",No1,No2,No3);
}
int main()
{
    int iNum1=0,iNum2=0,iNum3=0;

    printf("Enter first number : ");
    scanf("%d",&iNum1);
    printf("Enter second number : ");
    scanf("%d",&iNum2);
    printf("Enter third number : ");
    scanf("%d",&iNum3);


    printf("\n\n Valuer befor swapping => \n");

    printf("A = %d . \n B = %d. \n C =%d",iNum1,iNum2);

    printf("\n \n");
    swap(iNum1,iNum2,iNum3);

   getch();
   return 0;
}
