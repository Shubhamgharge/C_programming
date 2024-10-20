//02 sum of digits in give  number
#include<stdio.h>
#include<conio.h>
int reverce(int N1)
{
    int itemp=0, isum=0, idig=0;
    itemp=N1;
    
     while(itemp > 0)
     {
        idig= itemp % 10;
        isum+=idig;
        itemp= itemp/10;
        
     }
     
    printf("\nsum of digits in %d  = %d ",N1,isum);

}
int main()
{
     int iNum=0 ;
     
     printf("\n Enter a Number for reverce order : ");
     scanf("%d",&iNum);

     reverce(iNum);
     
     
     
     getch();
     return 0;
}