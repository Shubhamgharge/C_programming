////////////////////////////////////////////////////////////////////////
//
///      07 Print letters from W to E in reverse order.
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

 void Display();

 int main()
 {
     Display();

     getch();
     return 0;

 }
 Display()
 {
     char ch='W';

     while(ch>='E')
     {
         printf(" %c",ch);

         ch--;
     }
 }
