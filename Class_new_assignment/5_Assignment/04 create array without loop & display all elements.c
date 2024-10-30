//04 Crate Array of 7 Elements With Null(0) Initialization & 
//Accept All Elements without Loop Display All Elements
#include<stdio.h>
#include<conio.h>

int main()
{ 
    int iAge[7]={};
   
    printf("\n 1st Array Element is %d.",iAge[0]);
    printf("\n 2nd Array Element is %d.",iAge[1]);
    printf("\n 3rd Array Element is %d.",iAge[2]);
    printf("\n 4th Array Element is %d.",iAge[3]);
    printf("\n 5th Array Element is %d.",iAge[4]);
    printf("\n 6th Array Element is %d.",iAge[5]);
    printf("\n 7th Array Element is %d.",iAge[6]);
    
    getch();
    printf("\n\nAccept array element. ");
   printf("\n\nEnter 1st array element : "); 
   scanf("%d",&iAge[0]);
   printf("\nEnter 2nd array element : ");
   scanf("%d",&iAge[1]);
   printf("\nEnter 3rd array element : ");
   scanf("%d",&iAge[2]);
   printf("\nEbter 4rh array element : ");
   scanf("%d",&iAge[3]);
   printf("\nEnter 5th array elenent : ");
   scanf("%d",&iAge[4]);
   printf("\nEbter 6rh array element : ");
   scanf("%d",&iAge[5]);
   printf("\nEnter 7th array elenent : ");
   scanf("%d",&iAge[6]);
   
   printf("\n\nDisplay all elements :");
   printf("\n 1st Array Element is %d.",iAge[0]);
    printf("\n 2nd Array Element is %d.",iAge[1]);
    printf("\n 3rd Array Element is %d.",iAge[2]);
    printf("\n 4th Array Element is %d.",iAge[3]);
    printf("\n 5th Array Element is %d.",iAge[4]);
    printf("\n 6th Array Element is %d.",iAge[5]);
    printf("\n 7th Array Element is %d.",iAge[6]);
   getch();
   return 0;
   
}
