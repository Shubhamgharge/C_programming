//04 check whether it contains 2 in it or
#include<stdio.h>
#include<conio.h>
int reverce(int N1)
{
    int itemp=0, idig=0, icount=0;
    itemp=N1;
    
     while(itemp > 0)
     {
        idig= itemp % 10;
        if(idig == 2);
        
        itemp= itemp/10;
        
     }
    if(idig==2) 
    {
        printf("\n it contains two. ");
    }
    else
    {
           printf("\n there is no two. ");
    }
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