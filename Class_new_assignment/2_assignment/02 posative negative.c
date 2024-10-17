// 02 positive negative
#include<stdio.h>
#include<conio.h>
int positive_negative(int);

int main()
{
    int Num=0;
    
    printf("\nEnter any number to check it is even or odd : ");
    scanf("%d",&Num);
    
    positive_negative(Num);
    
    getch();
    return 0;
}
int positive_negative(Num)
{
    
       if(Num  == 0) 
       {
         printf("\n %d is nuteal. ",Num); 
       }
       else if(Num > 0) 
       {
          printf("\n  %d is posative number. ",Num);
       }
       else if( Num < 0) 
       {
          printf("\n %d is negative number. ",Num);
       }
       else
      {
        printf("\n\n Invalid input..!!");
        
      }
    

}