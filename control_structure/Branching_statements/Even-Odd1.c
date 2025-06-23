///even odd 1
#include<stdio.h>
#include<conio.h>

int main()
{
   int no=0;
   
   printf("-----------*****---------------\n");
   
   printf(" \n Enter a number : ");
   scanf("%d",&no);

   if(no %2 ==0)
   {
     printf("\n %d is even ",no);
   }
   else
   { 
     printf("\n %d is odd",no);
   }
   
   printf("\n\n----------*****---------------");
   getch();
   return 0;
   
}
