#include<stdio.h>
#include<conio.h>
int main()
{

    int no=0;

    printf("enter any number : ");
    scanf("%d",&no);

    if(no==0)
    {

        printf("%d is nuteal",no);

    }


         else if(no >0)
        {

            printf("%d is posativ",no);

        }


        else{
            printf("%d is negativ ",no);

        }
        getch();
}
