///simple if-else
#include<stdio.h>
#include<conio.h>

int main()
{
   int no=0;
   
   printf("-----------*****---------------\n");
   
   printf(" \n Enter a number : ");
   scanf("%d",&no);

   if(no > 0)
   {
     printf("\n %d is pisativ ",no);
   }
   else
   { 
     printf("\n %d is negativ",no);
   }
   
   printf("\n\n----------*****---------------");
   getch();
   return 0;
   
}
