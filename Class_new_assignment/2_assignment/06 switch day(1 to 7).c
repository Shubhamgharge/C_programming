// 06 switch day(1 to 7)
#include<stdio.h>
#include<conio.h>

int week(int);

int main()
{
    int Num=0;
    
    printf("\nEnter a number (1-7) for days in week: ");
    scanf("%d",&Num);
    
    week(Num);
    
    getch();
    return 0;
}
int week(No)
{
    switch(No)
    {
        case 1:
               printf("\nThe day of the week is : monday");
               break;
        case 2:
               printf("\n The day of the week is : Tuesday");
               break;
        case 3:
              printf("\n The day of the week is : Wednesday");
              break;
        case 4:
              printf("\n The day of the week is : Thursday");
              break;
        case 5: 
              printf("\n The day of the week is : Friday"); 
              break;
        case 6:
               printf("\n The day of the week is : Saturday");
               break;
        case 7:
              printf("\n The day of the week is : Sunday");    
        default:
                printf("\n In valid input..!!");
                break;
               
    
    }
       
}