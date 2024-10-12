/*09 Create, Accept, Display Array Using Loop - with macro,
 Find Maximum Element in that array.*/
#include<stdio.h>
#include<conio.h>
# define size 7

int main()
{
   int Bill[size]={0}, i=0, max=0;
   
   printf("\n------------********----------------\n");
  
   printf("\n\nEnter %d Array Element :\n",size);
   
   for(i=0 ; i<size ; i++)
   {
       printf("\n Enter array %d element : ",i+1);
      scanf("%d",& Bill[i]);
   }
   
   
   for(i=0 ; i<size ; i++)
   {
       if(i==0)   
       {
         max = Bill[i];
         continue;
       }
       if(Bill[i] > max) 
       {
          max = Bill[i];
       }
     
   }
   
     printf("\n Maximum Element in Array is %d:",max);
   
   
   printf("\n\n-------------*******----------------\n");
   printf("\n press any key to exit..!!\n\n");
   getch();
   return 0;
}
