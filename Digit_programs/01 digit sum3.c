//01 digit sum 3
#include<stdio.h>
#include<conio.h>

int main()
{
   int no=0,temp=0,dsum=0;
   
   printf("\n------------********----------------\n");
  
     printf("\n Enter a number to make sum of digits : ");
     scanf("%d",&no);                                       
     
     //temp=no;
     
     for( temp = no ; temp > 0 ; temp=temp/10)                 
     {
        
        dsum = dsum + (temp % 10);
        //temp = temp/ 10;
     }
     
     printf("\n sum of digits in %d is %d : ",no, dsum);
     
   printf("\n\n-------------*******----------------\n");
   printf("\n press any key to exit..!!\n\n");
   getch();
   return 0;
}
