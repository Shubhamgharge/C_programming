#include<stdio.h>
#include<conio.h>
int main()
{


    int n1=0,n2=0,temp=0;

    printf("enter a first number : ");
    scanf("%d",&n1);
    printf("enter a second number : ");
    scanf("%d",&n2);

    printf("numbers befor swapping:")
 ;

 printf("\n\n1st number = %d",n1) ;
 printf("\n 2nd number = %d",n2);
 printf("\n \nnumbers after swapping");

                    ///n1=2, n2=3

 n1=n1+n2;         ///n1=2+3=5
 n2=n1-n2;         ///n2=5-3=2
 n1=n1-n2;         ///n1=

 printf("\n 1st number=%d",n1) ;
 printf("\n2nd number =%d",n2);

 getch();


}
