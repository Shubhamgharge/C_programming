//07 Create, Accept, Display Array Using Loop - with macro, 
//Search Given Element in that Array & Return its locatiom If Found.
#include<stdio.h>
#include<conio.h>
#define size 7
int main()
{ 
    int i=0, iAge[size]={0}, iSearch=0;
   
    printf("\n\nAccept %d array element.\n\n",size);
    
    for(i=1 ; i<=size ; i++)
    {
      printf("\nEnter %d array element : ",i); 
      scanf("%d",&iAge[i]);
    }
   
   printf("\n\nDisplay all elements :");
   
   printf("\n\n Enter number to search in the array : ");
   scanf("%d",&iSearch);
   for(i=0 ; i<=size ; i++)
   {
      if(iSearch ==iAge[i]) 
      {
         //printf("\n %d found at %d index",iSearch,i);
         break;
        //return true;
      }
   }   
      if(i<size)
      {
         printf(" \n%d found at %d location",iSearch,i);
      }
      else 
      {
        printf("\n %d  not found",iSearch);
        //return false;
      }
    
   getch();
   return 0;
   
}
    