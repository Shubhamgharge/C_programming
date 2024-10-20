//05 even digit count in number
#include<stdio.h>
#include<conio.h>
int reverce(int N1)
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
    
     printf("\n count of even dugits in %d = %d ",N1, ecount);
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