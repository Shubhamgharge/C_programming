//16 Create, Accept, Display Array Using Loop - with macro, 
//Even, Odd and zero count of Element in Array.
#include<stdio.h>
#include<conio.h>

#define size 7
int main()
{ 
    int i=0, iAge[size]={0}, iEcount=0, iOcount=0, iZcount=0;
   
    printf("\n\nAccept %d array element.\n\n",size);
    
    for(i=0 ; i<size ; i++)
    {
      printf("\nEnter %d array element : ",i); 
      scanf("%d",&iAge[i]);
     
    }
    for(i=0 ; i<size ; i++)
    {
        if(iAge[i] % 2==0) 
        {
           iEcount++;
        }
        else if(iAge[i] % 2==1) 
        {
           iOcount++;
        }
        else
        {
        
        iZcount++;
        }
    
    }
    
    printf("\n Count of Even elements is : %d. ",iEcount);
    printf("\n Count of Even elements is : %d. ",iOcount);
    printf("\n Count of Even elements is : %d. ",iZcount);
   getch();
   return 0;
   
}
    