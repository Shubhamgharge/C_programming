// 01 even odd
#include<stdio.h>
#include<conio.h>
int even_odd(int);

int main()
{
    int Num=0;
    
    printf("\nEnter any number to check it is even or odd : ");
    scanf("%d",&Num);
    
    even_odd(Num);
    
    getch();
    return 0;
}
int even_odd(Num)
{
    if(Num >=0)
    {
       if(Num  == 0) 
       {
         printf("\n %d is nuteal. ",Num); 
       }
       else if(Num % 2 == 0) 
       {
          printf("\n  %d is even number. ",Num);
       }
       else
       {
          printf("\n %d is odd number. ",Num);
       }
    
    }
    else
    {
        printf("\n\n Invalid input..!!");
        
    }


}