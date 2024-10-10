///Basic of Howell rectangle pattern
        /////////////////
        //             //
        //             //
        //             //
        /////////////////
       
#include<stdio.h>
#include<conio.h>

int main()
{
   int s=0,i=0,j=0;
   
   printf("\n------------********----------------\n");
   printf("\nenter row and column size=");
   scanf("%d",&s);
   
   for(i=1 ; i<=s ; i++)
   {
      for(j=1 ; j<=s ; j++)
       {
           if(i==1 || i==s || j==1 ||j==s )
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
    
   printf("\n press any key to exit..!!");
   printf("\n-------------*******----------------\n");
   getch();
   return 0;
}