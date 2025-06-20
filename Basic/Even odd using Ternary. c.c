///even odd using Ternary 
#include<stdio.h>
#include<conio.h>

int main()
{
   int no=0,i=10;
   
   printf("-------------*****---------------\n");
   
   printf("\n Enter any number:");
   scanf("%d",&no);
   
   
   (no<=0)?printf("\n invalid input"):(no%2==0)? printf("\n %d is even",no):printf("\n %d is odd",no);
   
   printf("\n Thank you press any kay to exist!!");
 
   printf("\n\n------------*****---------------");
   getch();
   return 0;
   
}
    
