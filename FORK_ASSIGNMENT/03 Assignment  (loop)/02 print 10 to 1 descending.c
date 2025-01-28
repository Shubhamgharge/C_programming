////////////////////////////////////////////////////////////////////////
//
///      02 Print 10 to 1 desending order
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void print();

int main()
{
    print();

    getch();
    return 0;
}
void print()
{

    for(int i=10 ; i>=1 ; i--)
    {
        printf("%d \n",i);
    }
}
