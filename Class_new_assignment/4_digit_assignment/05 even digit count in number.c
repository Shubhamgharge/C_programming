//05 even digit count in number
#include<stdio.h>
#include<conio.h>
int edigit(int N1)
{
    int itemp=0, idig=0, ecount=0;
    itemp=N1;
    
     while(itemp > 0)
     {
        idig= itemp % 10;
        
        if((idig % 2 == 0) && (idig !=0))
        {
           ecount++;
        }
        
        itemp= itemp/10;
        
     }
    return ecount;
     
}
int main()
{
     int iNum=0 ;
     
     printf("\n Enter a Number to count even digit count : ");
     scanf("%d",&iNum);

     printf("\n count of even digits in %d = %d ",iNum, edigit(iNum));
     
     
     getch();
     return 0;
}