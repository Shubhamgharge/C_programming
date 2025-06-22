//05 accept marks and display total and percentage
#include<stdio.h>
#include<conio.h>
float calculation(int No1, int No2,int No3)
{
   float ans=0.0;
   
   ans=((No1 + No2 + No3)/3);
   
   return ans;
}
int main()
{
        int No1=0 ,No2=0, No3=0;
        float fret=0.0;
        
        printf("\nEnter marks in subject 1 :");
        scanf("%d",&No1);
        printf("\n Enter marks in subject 2 :");
        scanf("%d",&No2);
        printf("\n Enter marks in subject 3 :");
        scanf("%d",&No3);
        
        
        fret=calculation(No1, No2, No3) ;
        printf("\nTotal : %d",(No1 + No2 + No3));
        printf("\n percentage is : %f",fret);
        getch();
        return 0;
}
