// 07 months in year
#include<stdio.h>
#include<conio.h>

int year(int);

int main()
{
    int Num=0;
    
    printf("\nEnter a number (1-12) for months in year : ");
    scanf("%d",&Num);
    
    year(Num);
    
    getch();
    return 0;
}
int year(No)
{
    switch(No)
    {
        case 1:
               printf("\nJanuary ");
               break;
        case 2:
               printf("\n february");
               break;
        case 3:
              printf("\n March");
              break;
        case 4:
              printf("\n April");
              break;
        case 5: 
              printf("\n May"); 
              break;
        case 6:
               printf("\n June");
               break;
        case 7:
              printf("\n July");   
              break;
        case 8:
               printf("\nAugust");
               break;
        case 9:
               printf("\n September");
               break;
        case 10:
              printf("\n Octumbet");
              break;
        case 11:
              printf("\n November");
              break;
        case 12: 
              printf("\n December"); 
              break;
        default:
                printf("\n In valid input..!!");
                break;
               
    
    }
       
}