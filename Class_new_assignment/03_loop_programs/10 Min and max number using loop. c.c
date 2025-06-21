//10 min and max number using loop
#include<stdio.h>
#include<conio.h>

int main()
{
     int Num=0, i=1, max=0, min=0;
     
     printf("\n Enter 10 numbers: \n");
     
     while(i <= 5)
     {
        printf("\n Enter %d number : ",i);
        scanf("%d",&Num);
        
        
      /*  if(Num > max) 
        {
            max=Num;
        
        }*/
        if( Num < min ) 
        {
            min=Num;
        }
        i++;
     }
    
     printf("\n maximum number is %d .",max);
      printf("\n minimum number is %d .",min);
     getch();
     return 0;

}
    
