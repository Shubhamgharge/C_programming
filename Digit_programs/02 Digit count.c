//02 digit count in number
#include<stdio.h>
#include<conio.h>

int main()
{
   int no=0,temp=0,dcount=0;
   
   printf("\n------------********----------------\n");
  
     printf("\n Enter a number to count of digits : ");
     scanf("%d",&no);                                       
     
     temp=no;
     
     while( temp > 0 )                 
     {
        temp = temp / 10;
        dcount++;
     }
     
     printf("\n There are %d digits in %d number: ",dcount,no);
     
   printf("\n\n-------------*******----------------\n");
   printf("\n press any key to exit..!!\n\n");
   getch();
   return 0;
}
