////////////////////////////////////////////////////////////////////////
//
///      11 check whether given year is a leap year.
//
//////////////////////////////////////////////////////////////////////

#include<Stdio.h>
#include<conio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 2

BOOL Check(int iNo)
{
    if(iNo %4 == 0)
    {
        return TRUE;
    }
    else
    {

        return FALSE;
    }
}
int main()
{
    int iYear=0;

    BOOL bret=FALSE;
    printf("Enter any Year to check it is leap year or not: ");
    scanf("%d",&iYear);

    bret=Check(iYear);

    if(bret==TRUE)
    {

        printf("\n %d is leap Year.",iYear);
    }
    else
    {
        printf("\n %d is not leap year.",iYear);
    }


    getch();
    return 0;
}
