/// only consonant count in the string

#include<stdio.h>
#include<conio.h>

int main()
{
    char Sname[50]={'\0'};
    int i=0,Symbol_count=0;

    printf(" Enter a String : ");
    gets(Sname);

    while(Sname[i] != '\0')
    {

              if(!(Sname[i]>= 'a' && Sname[i]<= 'z' || Sname[i]>= 'A' && Sname[i]<= 'Z' || Sname[i]>= '0' && Sname[i]<= '9' || Sname[i] == ' ' || Sname[i] == '\t' ))
              {
                   Symbol_count++;
              }

              i++;
     }


    printf("\n count of symbol in string : %d .",Symbol_count);

    getch();
    return 0;

}


