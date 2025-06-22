/// only consonant count in the string

#include<stdio.h>
#include<conio.h>

int main()
{
    char Sname[50]={'\0'};
    int i=0,Consonant_count=0;

    printf(" Enter a String : ");
    gets(Sname);

    while(Sname[i] != '\0')
    {

              if(!(Sname[i]=='a' || Sname[i]=='e' || Sname[i]=='i' || Sname[i]=='o' || Sname[i]=='u' || Sname[i]=='A' || Sname[i]=='E' || Sname[i]=='I' || Sname[i]=='O' || Sname[i]=='U'))
              {
                   Consonant_count++;
              }

        i++;
     }


    printf("\n count of consonant in string : %d .",Consonant_count);

    getch();
    return 0;

}


