///////////////////////////////////////////////////////////////////////
//
///      08     Row=4   Column =4
///
///                 A   A   A   A
///
///                 B   B   B   B
///
///                 C   C   C   C
///
///                 D   D   D   D
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
    int i=0,j=0;

    char ch='\0';

    for(i=1 ,ch='A'  ; i<=iRow ; i++ ,ch++)
    {
        for(j=1 ; j<=iCol ; j++  )
        {
            printf(" %c  ",ch);
        }
        printf("\n");
    }
}




