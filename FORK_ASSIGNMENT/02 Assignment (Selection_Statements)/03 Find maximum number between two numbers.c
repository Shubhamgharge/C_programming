////////////////////////////////////////////////////////////////////////
//                                                                    //
///      03 Find maximum number between two given numbers.            //
//                                                                    //
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void Max(int No1 , int No2 )
{
     if(No1==No2)
     {
        printf("Given numbers are equal ");

     }
     else if(No1 > No2 && )
     {
         printf(" \n %d is Greater.",No1);
     }
     else
     {
         printf(" \n %d is smaller.",No2);

     }
}
int main()
{
    int iNum1=0,iNum2=0;
    //down;
    printf("Enter two numbers to find maximum number between two given numbers: \n\n");

    printf("\n Enter 1st nimber : ");
    scanf("%d",&iNum1);
    printf("ENter 2nd number : ");
    scanf("%d",&iNum2);


    Max(iNum1, iNum2);

    getch();
    return 0;
}

