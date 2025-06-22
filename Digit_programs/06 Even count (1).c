//06 Even count
#include<stdio.h>
#include<conio.h>

int main()
{
   int no=0,temp=0,dig=0,Ecount=0;
   
   printf("\n------------********----------------\n");
  
     printf("\n Enter a number to find even count in given number : ");
     scanf("%d",&no);                                       
     
     temp=no;
     
     while( temp > 0 )                 
     {
         dig= temp % 10;
        if((dig % 2 == 0) && dig != 0) 
        {
           Ecount++;
        }
        temp=temp/10;
     }
     
     printf("\n The even ccount in %d is  %d : ",no,Ecount);
     
   printf("\n\n-------------*******----------------\n");
   printf("\n press any key to exit..!!\n\n");
   getch();
   return 0;
}
