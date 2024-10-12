/*10 Create, Accept, Display Array Using Loop - with macro,
 Find Minimum Element in that array.*/
#include<stdio.h>
#include<conio.h>
# define size 7

int main()
{
   int Bill[size]={0}, i=0, min=0;
   
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
         min = Bill[i];
         continue;
       }
       if(Bill[i] < min) 
       {
          min = Bill[i];
       }
     
   }
   
     printf("\n Minimum Element in Array is %d:",min);
   
   
   printf("\n\n-------------*******----------------\n");
   printf("\n press any key to exit..!!\n\n");
   getch();
   return 0;
}
