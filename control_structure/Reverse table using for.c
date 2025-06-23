///reverse table usiforg for
#include<stdio.h>
#include<conio.h>

int main()
{
   int no=0,i=10;
   
   printf("-------------*****---------------\n");
   
   printf("\n Enter any number for reverse table:");
   scanf("%d",&no);
   
   for(i=10 ; i>=1 ; i--)
   {
     printf("%d * %d = %d\n",no,i,(no*i));
     
   } 
   
   printf("\n Thank you press any kay to exist!!");
 
   printf("\n\n------------*****---------------");
   getch();
   return 0;
   
}
    
