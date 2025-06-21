//09 sum of 10 number
#include<stdio.h>
#include<conio.h>

int main()
{
     int Num=0, i=0, sum=0;
     
     for(i=1 ; i<=10 ;i++)
     {
        printf("\n Enter %d number : ",i);
        scanf("%d",&Num);
        
        sum+=Num;
     }
     
     printf("\n Sum of 10 numbers is %d .",sum);
     getch();
     return 0;

}
    
