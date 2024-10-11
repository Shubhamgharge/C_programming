//Q.6
       
#include<stdio.h>
#include<conio.h>

int main()
{
   int s=0,i=0,j=0,no=0;
   
   
   
   printf("\nenter row and column size=");
   scanf("%d",&s);
   printf("\n------------********----------------\n\n");
   for(no=1,i=1 ; i<=s ; i++)
   {
      for( j=1 ; j<=s ; j++)
       {
           if(i>=j)
           {
              printf(" %d ",no);
              no++;
           }
           
        /*  else
           {
            printf("   ");
           }*/
       } 
       printf("\n");
   }
   
   printf("\n-------------*******----------------\n");
   printf("\n press any key to exit..!!\n\n");
   getch();
   return 0;
}