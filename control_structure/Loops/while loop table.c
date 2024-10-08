///while loop table
#include<stdio.h>
#include<conio.h>

int main()
{
   int no=0,i=1;
   
   printf("-----------*****---------------\n");
   
   printf("\n Enter any number for its table :");
   scanf("%d",&no);
   
   while(i<=10 )
   {
     printf("%d * %d = %d \n",no,i,(no*i));
     i++;
   } 
   
   printf("\n Thank you press any kay to exist!!");
 
   printf("\n\n----------*****---------------");
   getch();
   return 0;
   
}
    