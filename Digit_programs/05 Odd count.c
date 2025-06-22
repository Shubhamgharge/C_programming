//05 Odd count
#include<stdio.h>
#include<conio.h>

int main()
{
   int no=0,temp=0,dig=0,ocount=0;
   
   printf("\n------------********----------------\n");
  
     printf("\n Enter a number to find odd count in given number : ");
     scanf("%d",&no);                                       
     
     temp=no;
     
     while( temp > 0 )                 
     {
         dig= temp % 10;
        if(dig % 2 == 1) 
        {
           ocount++;
        }
        temp=temp/10;
     }
     
     printf("\n The oddccount in %d is  %d : ",no,ocount);
     
   printf("\n\n-------------*******----------------\n");
   printf("\n press any key to exit..!!\n\n");
   getch();
   return 0;
}
