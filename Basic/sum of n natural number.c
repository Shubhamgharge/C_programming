#include<stdio.h>
#include<conio.h>
int main()
{

    int no,i=0,sum=0;

    printf("Enrer a number : ");
    scanf("%d",&no);

    for(i=1;i<=no;i++)
    {

        sum=sum+i;

    }

    printf("sum = %d ",sum);


    getch();

}
