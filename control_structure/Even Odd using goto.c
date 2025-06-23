//even odd using goto 
#include<stdio.h>
#include<conio.h>

int main()
{
   int no=0;
   up:
   printf("\n------------********----------------\n");
   printf("enter any  posative number to show even or odd=");
   scanf("%d",&no);
   if(no<=0)
   {
      printf("\ninvalid in put");
      goto up;
   }
   else if(no%2==0)
   {
     printf("%d is even",no);
   }
   else
   {
     printf("%d is odd",no);
   }
    
   printf("\n\nthanks");
   printf("\n press any key to exit..!!");
   printf("\n-------------*******----------------\n");
   getch();
   return 0;
}
