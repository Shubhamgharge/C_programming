//04 zero count
#include<stdio.h>
#include<conio.h>

int main()
{
   int no=0,temp=0,zcount=0;
   
   printf("\n------------********----------------\n");
  
     printf("\n Enter a number to make count zero (0) of digits : ");
     scanf("%d",&no);                                       
     
     temp=no;
     
     while( temp > 0 )                 
     {
        if(temp % 10 == 0) 
        {
           zcount++;
        }
        temp=temp/10;
     }
     
     printf("\n The zero (0) count in  %d is  %d : ",no,zcount);
     
   printf("\n\n-------------*******----------------\n");
   printf("\n press any key to exit..!!\n\n");
   getch();
   return 0;
}
