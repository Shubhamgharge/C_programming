///sum of 10 numbers
#include<stdio.h>
#include<conio.h>

int main()
{ 
    int i=0, no=0, c=0 , sum=0;
    
    printf("\n-----------------*******--------------------\n");
    
  /* 
    printf("\n Enter end point of table: ");
    scanf("%d",&epoint);*/
    
         for(i=1 ; i<=10 ; i++)
        {
          
             printf("\n Enter %d number : ",i);
             scanf("%d",&no);
          
             sum+=no;
        }
     
         printf("\n sum of 10 numbers is %d : ",sum);
        
    printf("\n----------------*******-----------------\n");
     getch();
     return 0;
}
    