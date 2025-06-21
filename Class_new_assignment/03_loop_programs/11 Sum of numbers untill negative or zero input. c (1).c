//11 sum of numbers untill negative or zero input
#include<stdio.h>
#include<conio.h>
int main()
{
     int Num=0,i=1, sum=0, t=0;
     
     printf("\n Enter a Numbers : \n");
     
     while(i > 0)
     {
         printf("\n enter %d number : ",i);
         scanf("%d",&Num);
             
         if(Num <= 0) 
         {
            break; 
         
         }
         sum+=Num;
         
       i++;
     }

     printf("\n sum of numbers is %d.",sum);
     
     getch();
     return 0;
}
