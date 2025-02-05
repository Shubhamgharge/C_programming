////////////////////////////////////////////////////////////////////////
//
///      02     Row=4   Column =4
///
///                 *   #   *   #
///
///                 *   #   *   #
///
///                 *   #   *   #
///
///                 *   #   *   #
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void Pattern(int,int);

int main()
{
    int iRow=0,iColumn=0;

    printf("Enter Row size : ");
    scanf("%d",&iRow);
    printf("Enter Column size : ");
    scanf("%d",&iColumn);
    printf("\n");

    Pattern(iRow,iColumn);

    getch();
    return 0;

}
Pattern(Row,Column)
{
    int i=0,j=0,No=0;

    for(i=1 ; i<=Row ; i++)
    {
        for(j=1 ,No=1; j<=Column ; j++,No++)
        {

                printf(" %d ",No);

        }
        printf("\n");
    }
}
