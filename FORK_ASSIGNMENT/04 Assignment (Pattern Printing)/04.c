////////////////////////////////////////////////////////////////////////
//
///      04     Row=4   Column =4
///
///                 4   3   2   1
///
///                 4   3   2   1
///
///                 4   3   2   1
///
///                 4   3   2   1
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
Pattern(iRow,iCol)
{
    int i=0,j=0,No=0;

    for(i=1 ; i<=iRow ; i++)
    {
        for(j=1 , No=iRow ; j<=iCol ; j++ , No--)
        {
            printf(" %d ",No);
        }
        printf("\n");
    }
}
