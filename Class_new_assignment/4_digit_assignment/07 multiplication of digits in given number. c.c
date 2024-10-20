//07 multiplication of digits in given number
#include<stdio.h>
#include<conio.h>
int reverce(int N1)
{
    int itemp=0, idig=0, ecount=0, ocount=0, esum=0, osum=0, diff=0,mult=1;
    itemp=N1;
    
     while(itemp > 0)
     {
        idig= itemp % 10;
       
        mult=mult*idig;
        itemp=itemp/10;
     }
       
     printf("Multiplication in %d number %d",N1,mult);
     

}
int main()
{
     int iNum=0 ;
     
     printf("\n Enter a Number for multiplication of digits in number : ");
     scanf("%d",&iNum);

     reverce(iNum);
     
     
     
     getch();
     return 0;
}