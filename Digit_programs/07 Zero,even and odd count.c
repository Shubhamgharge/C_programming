//07 zero , even and odd count
#include<stdio.h>
#include<conio.h>

int main()
{
   int no=0, temp=0, dig=0, Ecount=0, Ocount=0, zcount=0;
   
   printf("\n------------********----------------\n");
  
     printf("\n Enter a number to find  zero , even and odd count of number : ");
     scanf("%d",&no);                                       
     
     temp=no;
     
     while( temp > 0 )                 
     {
        dig = temp % 10;
        if(dig == 0) 
        {
           zcount++;
        }
        else if(( dig % 2 == 0) && ( dig != 0)) 
        { 
           Ecount++;
        }
        else
        {
           Ocount++;
        }
        temp=temp/10;
     }
      
        printf("\n The zero (0) count in  %d is  %d : ",no,zcount);
        printf("\n The even count in  %d is  %d : ",no,Ecount);
        printf("\n The odd count in  %d is  %d : ",no,Ocount);
   printf("\n\n-------------*******----------------\n");
   printf("\n press any key to exit..!!\n\n");
   getch();
   return 0;
}
