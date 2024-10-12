/*12 Find Count of Even Elements in that array. .*/
#include<stdio.h>
#include<conio.h>
# define size 7

int main()
{
   int Bill[size]={0}, i=0, Ecount=0;
   
   printf("\n------------********----------------\n");
  
   printf("\n\nEnter %d Array Element :\n",size);
   
   for(i=0 ; i<size ; i++)
   {
       printf("\n Enter array %d element : ",i+1);
      scanf("%d",& Bill[i]);
   }
   
   for(i=0 ; i<size ; i++)
   {
      if(Bill[i] == 0) 
      {
          
          continue;
      }
      else if(Bill[i] %2 == 0) 
      {
         Ecount++;
      }
   }
     
   
   
     printf("\n count of even elements in array is %d:",Ecount);
   
   
   printf("\n\n-------------*******----------------\n");
   printf("\n press any key to exit..!!\n\n");
   getch();
   return 0;
}
