///Space count in string
#include<stdio.h>
#include<conio.h>

int main()
{
        char Sname[30]={'\0'};

        int i=0 ,space_count=0;

        printf("\n Enter a string : ");
        gets(Sname);

        //clscr();

        printf("Given string is : %s.\n\n",Sname);

        while(Sname[i] != '\0')
        {
            if(Sname[i] == ' ')
            {
                space_count++;

            }
            i++;
        }

        printf("Total spaces in a string : %d.",space_count);

        getch();
        return 0;


}
