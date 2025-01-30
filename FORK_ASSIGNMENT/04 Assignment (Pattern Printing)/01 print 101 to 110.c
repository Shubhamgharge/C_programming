////////////////////////////////////////////////////////////////////////
//
///      01 Print 101 to 110 on screen using loop.
//
//////////////////////////////////////////////////////////////////////

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
     for(int i=101 ; i<=110 ;i++)
     {
         printf("%d  \n",i);

     }
 }
