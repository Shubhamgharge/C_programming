//11 Create, Accept, Display Array Using Loop - with macro, 
//Maximum  Element in Array.
#include<stdio.h>
#include<conio.h>

#define size 7
int main()
{ 
    int i=0, iAge[size]={0}, iMin=0;
   
    printf("\n\nAccept %d array element.\n\n",size);
    
    for(i=0 ; i<size ; i++)
    {
      printf("\nEnter %d array element : ",i); 
      scanf("%d",&iAge[i]);
     
    }
    iMin=iAge[0];
    for(i=0 ; i<size ; i++)
    {
        if(iAge[i] < iMin) 
        {
           iMin = iAge[i];
        }
       
    
    }
    
    printf("\n Minimum element is : %d. ",iMin);
    
   getch();
   return 0;
   
}
    