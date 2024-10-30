//05 Crate Array of 7 Elements With Null(0) Initialization & 
//Accept All Elements with Loop Display All Elements
#include<stdio.h>
#include<conio.h>

int main()
{ 
    int i=0, iAge[7]={};
   
    printf("\n 1st Array Element is %d.",iAge[0]);
    printf("\n 2nd Array Element is %d.",iAge[1]);
    printf("\n 3rd Array Element is %d.",iAge[2]);
    printf("\n 4th Array Element is %d.",iAge[3]);
    printf("\n 5th Array Element is %d.",iAge[4]);
    printf("\n 6th Array Element is %d.",iAge[5]);
    printf("\n 7th Array Element is %d.",iAge[6]);
    
    getch();
    printf("\n\nAccept array element. ");
    
    for(i=1 ; i<=7 ; i++)
    {
      printf("\nEnter %d array element : ",i); 
      scanf("%d",&iAge[i]);
    }
   
   printf("\n\nDisplay all elements :");
   
   for(i=1 ; i<=7 ; i++)
   {
      printf("\n 1st Array Element is %d.",iAge[i]);
   } 
   getch();
   return 0;
   
}
