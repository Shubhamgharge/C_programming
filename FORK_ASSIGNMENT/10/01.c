////////////////////////////////////////////////////////////////////////
//
///      01     Row=4   Column =4
///
///                 *   *   *   *
///
///                 *   *   *   *
///
///                 *   *   *   *
///
///                 *   *   *   *
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void Pattern(int,int);

int main()
{
    int iNum1=0, iNum2=0;

     int i=0,j=0;


    /*printf("Enter row size : ");
    scanf("%d",&iNum1);
    printf("Enter column size : ");
    scanf("%d",&iNum2);
*/
    for(i==1 ; i<=4 ; i++)
    {
        for(j==1 ; j<=4 ; i++)
        {
            printf(" * ");
        }
        printf("\n");
    }
   // Pattern(iNum1,iNum2);

    getch();
    return 0;
}
/*void Pattern(int No1,int No2)
{
    int i=0,j=0;

    for(i=1 ; i<=No1 ; i++)
    {
        for(j=1 ; j<=No2 ; i++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}*/
