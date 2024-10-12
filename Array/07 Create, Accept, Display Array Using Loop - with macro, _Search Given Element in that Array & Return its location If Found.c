/*07 Create, Accept, Display Array Using Loop - with macro, 
Search Given Element in that Array & Return its location If Found.*/
       
#include<stdio.h>
#include<conio.h>
# define size 7

int main()
{
   int Bill[size]={0},i=0,search=0;
   
   printf("\n------------********----------------\n");
  
   printf("\n\nEnter %d Array Element :\n",size);
   
   for(i=0 ; i<size ; i++)
   {
     printf("\n Enter array %d element : ",i+1);
     scanf("%d",&Bill[i]);
   }
   
   printf("\n Enter number to find it's location in array : ");
   scanf("%d",&search);
   
   for(i=0 ; i<size ; i++)
   {
     if(search == Bill[i]) 
     {
       
       break; 
     }
     
   }
   if( i<size)
   {
     printf("\n number entered by you is %d and it's index is %d:",search,i+1);
   }
   else
   {
   printf("\n number entered by you %d is not found:",search);
   }
   printf("\n\n-------------*******----------------\n");
   printf("\n press any key to exit..!!\n\n");
   getch();
   return 0;
}
