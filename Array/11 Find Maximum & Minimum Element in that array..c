/*11 Create, Accept, Display Array Using Loop - with macro, 
Find Maximum & Minimum Element in that array.*/
#include<stdio.h>
#include<conio.h>
# define size 7

int main()
{
   int Bill[size]={0}, i=0, max=0, min=0;
   
   printf("\n------------********----------------\n");
  
   printf("\n\nEnter %d Array Element :\n",size);
   
   for(i=0 ; i<size ; i++)
   {
       printf("\n Enter array %d element : ",i+1);
      scanf("%d",& Bill[i]);
   }
   max=  Bill[0];
   min = Bill[0];
   for(i=0 ; i<size ; i++)
   {

        if(Bill[i] > max) 
        {
           max = Bill[i];
        }
      
       if(Bill[i] < min) 
       {
          min = Bill[i];
       }
     
   }
   
     printf("\n Minimum Element is %d and minimum Element in Array is %d:",min,max);
   
   
   printf("\n\n-------------*******----------------\n");
   printf("\n press any key to exit..!!\n\n");
   getch();
   return 0;
}
