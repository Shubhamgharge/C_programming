//06 Create, Accept, Display Array Using Loop - with macro, Search Given Element in that Array & Return its Index If Found.
       
#include<stdio.h>
#include<conio.h>
# define size 3
int main()
{
   int Bill[7]={0},i=0,search=0;
   printf("\n------------********----------------\n");
  
   printf("\n\naccept array element :\n");
   
   for(i=0 ; i<size ; i++)
   {
     printf("\n enter array %d element : ",i+1);
     scanf("%d",&Bill[i]);
   }
   
   printf("\n Enter number to find it's index in array : ");
   scanf("%d",&search);
   for(i=0 ; i<size ; i++)
   {
     if(search==Bill[i]) 
     {
       printf("\n number entered by you is %d and it's index is %d:",search,i);
       break; 
     }
     
   }
   
   printf("\n\n-------------*******----------------\n");
   printf("\n press any key to exit..!!\n\n");
   getch();
   return 0;
}
