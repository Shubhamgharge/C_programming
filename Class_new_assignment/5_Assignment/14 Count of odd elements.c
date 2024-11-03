//14 Create, Accept, Display Array Using Loop - with macro, 
//Count of Odd Element in that Array.
#include<stdio.h>
#include<conio.h>

#define size 7
int main()
{ 
    int i=0, iAge[size]={0}, iOcount=0;
   
    printf("\n\nAccept %d array element.\n\n",size);
    
    for(i=0 ; i<size ; i++)
    {
      printf("\nEnter %d array element : ",i); 
      scanf("%d",&iAge[i]);
    }
    
    
    for(i=0 ; i<size ; i++)
    {
        if(iAge[i] %  2==1 )
        {
            iOcount++;
        
        }
        
    }  
    printf("\n Count of even elements is : %d  ",iOcount);
   getch();
   return 0;
   
}
    