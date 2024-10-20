//02 sum of digits in give  number
#include<stdio.h>
#include<conio.h>
int dsum(int N1)
{
    int itemp=0, isum=0, idig=0;
    itemp=N1;
    
     while(itemp > 0)
     {
        idig= itemp % 10;
        isum+=idig;
        itemp= itemp/10;
        
     }
     return isum;


}
int main()
{
     int iNum=0 ;
     
     printf("\n Enter a Number to make digit sum: ");
     scanf("%d",&iNum);

     
     printf("\nsum of digits in %d  = %d ",iNum,dsum(iNum) );
     
     getch();
     return 0;
}