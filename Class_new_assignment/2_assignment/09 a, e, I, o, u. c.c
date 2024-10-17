// 09 a, e, I, o, u
#include<stdio.h>
#include<conio.h>

int vowel(int);

int main()
{
    char ch='\0';
    
    printf("\nEnter a character to display vowel or not : ");
    scanf("%c",ch);
    
    vowel(ch);
    
    getch();
    return 0;
}
int vowel(ch)
{
    if((ch='A' || ch='E' || ch='I' || ch='O' || ch='U' ) || (ch='a' || ch='e' || ch='i' || ch='o' || ch='u')) 
    {
      printf("\n True");
    }
    
    else
    {
       printf("\n False");
    }
    
       
}