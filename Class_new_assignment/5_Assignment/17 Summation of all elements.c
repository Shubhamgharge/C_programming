//17 Create, Accept, Display Array Using Loop - with macro, 
//sum of all Element in Array.
#include<stdio.h>
#include<conio.h>

#define size 7
int main()
{ 
    int i=0, iAge[size]={0}, iSum=0;
   
    printf("\n\nAccept %d array element.\n\n",size);
    
    for(i=0 ; i<size ; i++)
    {
      printf("\nEnter %d array element : ",i); 
      scanf("%d",&iAge[i]);
     iSum += iAge[i];
    }
    
    printf("\n Sumoof all elements is : %d  ",iSum);
   getch();
   return 0;
   
}
    