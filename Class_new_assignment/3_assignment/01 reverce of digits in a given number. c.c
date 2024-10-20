//01 reverce of digits in a given number
#include<stdio.h>
#include<conio.h>
int reverce(int N1)
{
    int itemp=0, irev=0, idig=0;
    itemp=N1;
    
     while(itemp > 0)
     {
        idig= itemp % 10;
        irev=(irev*10) + idig;
        itemp= itemp /10;
       
     }
     
    printf("\n reverce is %d ",irev);

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