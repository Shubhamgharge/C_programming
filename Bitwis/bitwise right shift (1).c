// bitewise right shipt >>
 #include<stdio.h>
#include<conio.h>
int main()
{
    int no1=0,no2=0,res=0;
    
    printf("\n Enter a Number 1 : ");
    scanf("%d",&no1);
    printf("\n Enter a Number 2 : ");
    scanf("%d",&no2);
    
    printf("\n-----------------********-----------------n");
    res =no1 >> no2 ;
    printf("\n Number %d >> %d is  = %d",no1,no2,res);
    
    printf("\n press any kay to exist..!!\n");
    printf("\n-----------------********-----------------\n");
    getch();
    return 0;
}