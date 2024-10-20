//03 count of 2 in given number
#include<stdio.h>
#include<conio.h>
int reverce(int N1)
{
    int itemp=0, isum=0, idig=0, icount=0;
    itemp=N1;
    
     while(itemp > 0)
     {
        idig= itemp % 10;
        if(idig == 2)
        {
            icount++;
        }
        itemp= itemp/10;
        
     }
     
    printf("\ncount of 2 in %d = %d",N1,icount);

}
int main()
{
     int iNum=0 ;
     
     printf("\n Enter a Number to count frequency of 2: ");
     scanf("%d",&iNum);

     reverce(iNum);
     
     
     
     getch();
     return 0;
}