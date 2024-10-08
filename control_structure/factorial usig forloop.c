///factorial using for
#include<stdio.h>
#include<conio.h>

int main()
{
   int no=0,i=1,fact=1,temp=0;
   
   printf("-----------*****---------------\n");
   
   printf("\n Enter any number for calculate factorial :");
   scanf("%d",&no);
   
   temp=no;
   for(i=1 ; i<=temp ; temp--)
   {
     fact=fact*temp;
   } 
   
   printf("\n Factorial of %d : %d",no,fact);
   printf("\n Thank you press any kay to exist!!");
 
   printf("\n\n----------*****---------------");
   getch();
   return 0;
   
}
    