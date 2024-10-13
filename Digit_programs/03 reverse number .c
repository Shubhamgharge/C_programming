//03 reverse number
#include<stdio.h>
#include<conio.h>

int main()
{
   int no=0,temp=0,rev=0;
   
   printf("\n------------********----------------\n");
  
     printf("\n Enter a number to make reverse of given number: ");
     scanf("%d",&no);                                       
     
     temp=no;
     
     while( temp > 0 )                 
     {
        rev=(rev * 10 ) + (temp % 10) ;
        temp = temp / 10;
        
     }
     
     printf("\n The reverse of  %d is  %d : ",no, rev);
     
   printf("\n\n-------------*******----------------\n");
   printf("\n press any key to exit..!!\n\n");
   getch();
   return 0;
}
