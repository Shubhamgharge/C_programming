///posativ negative using Ternary 
#include<stdio.h>
#include<conio.h>

int main()
{
   int no=0,i=10;
   
   printf("-------------*****---------------\n");
   
   printf("\n Enter any number:");
   scanf("%d",&no);
   
   
   (no==0)?printf("\n %d is not positive or negative ",no):(no<0)? printf("\n %d is negative number",no):printf("\n %d is positive number",no);
   
   printf("\n \nThank you press any kay to exist!!");
 
   printf("\n\n------------*****---------------");
   getch();
   return 0;
   
}
    