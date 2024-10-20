//03 addition of 2 number
#include<stdio.h>
#include<conio.h>
int sum(int No1, int No2);

int main()
{
        int No1=0 ,No2=0;
        
        printf("\nEnter Number 1 :");
        scanf("%d",&No1);
        printf("\n Enter Number 2 :");
        scanf("%d",&No2);
        
        
        printf("\nThe sum of %d and %d is %d.",No1,No2,sum(No1, No2));
        getch();
        return 0;
}
int sum(No1,No2) 
{
    
    return No1 + No2 ;
    
}