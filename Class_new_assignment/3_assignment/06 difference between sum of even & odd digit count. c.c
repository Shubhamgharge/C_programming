//06 difference between sum of even & odd digit count
#include<stdio.h>
#include<conio.h>
int reverce(int N1)
{
    int itemp=0, idig=0, ecount=0, ocount=0, esum=0, osum=0, diff=0;
    itemp=N1;
    
     while(itemp > 0)
     {
        idig= itemp % 10;
        
        if((idig % 2 == 0) && (idig !=0))
        {
           esum=esum+idig;
        }
       if(idig % 2 == 1) 
        {
           osum=osum+idig; 
           
        }
        
        itemp=itemp/10;
     }
       
     diff= esum - osum;
     
     printf("\n difference between sum of even count and sum of odd count (%d -%d)= %d ",esum, osum,diff);
}
int main()
{
     int iNum=0 ;
     
     printf("\n Enter a Number to count even digit count : ");
     scanf("%d",&iNum);

     reverce(iNum);
     
     
     
     getch();
     return 0;
}