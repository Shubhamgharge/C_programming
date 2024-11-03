//09 Create, Accept, Display Array Using Loop - with macro, 
//Search Given Element in that Array & Return its locatiom If Found.
#include<stdio.h>
#include<conio.h>

#define size 7
int main()
{ 
    int i=0, iAge[size]={0}, iCount=0;
   
    printf("\n\nAccept %d array element.\n\n",size);
    
    for(i=1 ; i<=size ; i++)
    {
      printf("\nEnter %d array element : ",i); 
      scanf("%d",&iAge[i]);
      iCount++;
    }
   
   
        printf("\n Total count of given array elements is : %d  ",iCount);
      
    
   getch();
   return 0;
   
}
    