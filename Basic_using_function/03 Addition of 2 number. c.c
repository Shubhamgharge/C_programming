//03 addition of 2 number
#include<stdio.h>
#include<conio.h>
int sum(int No1, int No2);
int main()
{
        float No1=0 ,No2=0;
        
        printf("\nEnter Number 1 :");
        scanf("%f",&No1);
        printf("\n Enter Number 2 :");
        scanf("%f",&No2);
        
       // int sum(int No1, int No2) ;
        
        printf("The sum of %2f and %2f is %3f",No1,No2,sum(No1, No2));
        getch();
        return 0;
}
int sum(No1,No2) 
{
    
    return No1 + No2 ;
    
}
