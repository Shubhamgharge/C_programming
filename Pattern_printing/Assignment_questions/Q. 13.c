//Q.13
       
#include<stdio.h>
#include<conio.h>
int print(int);
int main()
{
   int s=0,i=0,j=0;
   char ch='\0';
   
   
   printf("\nenter row and column size=");
   scanf("%d",&s);
   printf("\n------------********----------------\n\n");
   for(i=1 ; i<=s ; i++)
   {
      for(ch='A',j=1 ; j<=s ; j++,ch++)
       {
           if(i==1 || i==s || j==1 || j==s)
           {
              printf(" %c",ch);
           }
           
           else
           {
            printf("  ");
           }
       } 
       printf("\n");
   }
   
   printf("\n-------------*******----------------\n");
   printf("\n press any key to exit..!!\n\n");
   getch();
   return 0;
}
