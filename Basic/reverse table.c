#include<stdio.h>
#include<conio.h>
int main()
{

    int no=0,i=0,rev=0;

    printf("enter a number for reverse table");
    scanf("%d",&no);

    for(i=10;i>=1;i--)
    {

        printf("%d \n",no*i);

    }


    getch();




}
