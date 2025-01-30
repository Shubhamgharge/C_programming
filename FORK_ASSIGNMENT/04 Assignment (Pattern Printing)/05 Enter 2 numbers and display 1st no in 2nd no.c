////////////////////////////////////////////////////////////////////////
//
///      05 Enter 2 nubers and display 1st number in second number of times
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void Dipsly(int,int);

int main()
{
    int iNum1=0,iNum2=0;

    printf("Ener 1st number : ");
    scanf("%d",&iNum1);
    printf("Enter 2nd number : ");
    scanf("%d",&iNum2);
    printf("\n");
    Display(iNum1,iNum2);

    getch();
    return 0;
}
Display(No1,No2)
{
    int i=1;

    for(i=1 ; i<=No2 ; i++)
    {
        printf(" %d",No1);
    }
}
