/// Count of uppercase ,lowercase, digit and spacial symbol in a string

#include<stdio.h>
#include<conio.h>

int main()
{
    char Sname[20]={'\0'};
    int i=0,ucount=0,lcount=0,dcount=0,space_count=0,symbol_count=0;

    printf("Enter a String : ");
    gets(Sname);

    while(Sname[i] != '\0')
    {
        if(Sname[i] >= 'A' && Sname[i] <= 'Z')
        {
            ucount++;
        }
        else if(Sname[i] >= 'a' && Sname[i] <= 'z')
        {
            lcount++;
        }
        else if(Sname[i] >= '0' && Sname[i] <= '9')
        {
            dcount++;
        }
        else if(Sname[i] == ' ')
        {

            space_count++;
        }
        else
        {
            symbol_count++;
        }

        i++;
    }

    printf(" Count of uppercase characters : %d \n",ucount);
    printf(" Count of lowercase characters : %d \n",lcount);
    printf(" Count of digit                : %d \n",dcount);
    printf(" Count of Spacial symbol       : %d \n",symbol_count);
    printf(" Count of space count          : %d \n",space_count);

    getch();
    return 0;


}
