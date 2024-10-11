//Q.1
       
#include<stdio.h>
#include<conio.h>

int main()
{
   int s=0,i=0,j=0;
   char ch='\0';
   
   
   printf("\nenter row and column size=");
   scanf("%d",&s);
   printf("\n------------********----------------\n\n");
   for(ch='A',i=1 ; i<=s ; i++)
   {
      for(j=1 ; j<=s ; j++)
       {
           if(i>=j)
           {
              printf(" %c ",ch);
              ch++;
           }
          else
           {
            printf("   ");
           }
       } 
       printf("\n");
   }
   
   printf("\n-------------*******----------------\n");
   printf("\n press any key to exit..!!\n\n");
   getch();
   return 0;
}