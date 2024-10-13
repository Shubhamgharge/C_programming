//01 swapping of two numbers
#include<stdio.h>
#include<conio.h>

int main()
{
   int no1=0, no2=0, temp=0 ;
   
   printf("\n------------********----------------\n");
  
     printf("\n Enter a 1st number : ");
     scanf("%d",&no1);                                       
     printf("\n Enter a 2nd number : ");
     scanf("%d",&no2);  
     
     printf("\n 1st number after swapping is  %d : ",no1);
     printf("\n 2nd number after swapping is  %d : \n\n",no2);
     
     temp=no1;
     no1=no2;
     no2=temp;
     
     printf("\n 1st number before swapping is  %d : ",no1);
     printf("\n 2nd number before swapping is  %d : ",no2);
        
   printf("\n\n-------------*******----------------\n");
   printf("\n press any key to exit..!!\n\n");
   getch();
   return 0;
}
