///basic F pattern
       
#include<stdio.h>
#include<conio.h>

int main()
{
   int s=0,i=0,j=0;
   
   
   printf("\nenter row and column size=");
   scanf("%d",&s);
   printf("\n------------********----------------\n\n");
   for(i=1 ; i<=s ; i++)
   {
      for(j=1 ; j<=s ; j++)
       {
           if( i==1 || j==1 || i==(s+1)/2 )
           {
              printf(" * ");
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