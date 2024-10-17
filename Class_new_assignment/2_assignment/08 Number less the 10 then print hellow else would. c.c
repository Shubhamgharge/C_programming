// 08 Number less the 10 then print hellow else would
#include<stdio.h>
#include<conio.h>

int check(int);

int main()
{
    int Num=0;
    
    printf("\nEnter a number  : ");
    scanf("%d",&Num);
    
    check(Num);
    
    getch();
    return 0;
}
int check(No)
{
    if(No < 10)
    {
      printf("\n Hellow");
    }
    else
    {
       printf("\n World");
    }
       
}