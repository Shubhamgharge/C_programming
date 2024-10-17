// 05 to check give no is divisible by 7 or not
#include<stdio.h>
#include<conio.h>

int check_divisible(int);

int main()
{
    int Num=0;
    
    printf("\nEnter a number to check it is divisible by 7 : ");
    scanf("%d",&Num);
    
    check_divisible(Num);
    
    getch();
    return 0;
}
int check_divisible(No)
{
    if(No >=0 ) 
    {
       if(No % 7== 0 ) 
       {
         printf("\n %d is divisible by 7",No); 
       }
       else
       {
          printf("\n  %d is not divisible by 7. ",No);
       }
    }  
    else
    {
       printf("\n Invalid input. !!");
    }   
       
}