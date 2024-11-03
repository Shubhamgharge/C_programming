//13 Create, Accept, Display Array Using Loop - with macro, 
//Count of Even Element in that Array & Return its locatiom If Found.
#include<stdio.h>
#include<conio.h>

#define size 7
int main()
{ 
    int i=0, iAge[size]={0}, iEcount=0;
   
    printf("\n\nAccept %d array element.\n\n",size);
    
    for(i=0 ; i<size ; i++)
    {
      printf("\nEnter %d array element : ",i); 
      scanf("%d",&iAge[i]);
    }
    
    
    for(i=0 ; i<size ; i++)
    {
        if(iAge[i]==0)
        {
           continue;
        
        }
        
        
        if(iAge[i] %  2==0 )
        {
            iEcount++;
        
        }
        
    }  
    printf("\n Count of even elements is : %d  ",iEcount);
   getch();
   return 0;
   
}
    