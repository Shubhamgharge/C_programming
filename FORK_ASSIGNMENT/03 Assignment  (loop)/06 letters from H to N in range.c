////////////////////////////////////////////////////////////////////////
//
///      06 Print letters from H to N.
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void Range();

int main()
{
    Range();
    getch();
    return 0;
}
Range()
{

    char ch='H';

       while(ch<='N')
       {
           printf(" %c",ch);
           ch++;
       }
}
