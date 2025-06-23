//alphabet (A to Z) with example
#include<stdio.h>
#include<conio.h>

int main()
{ 
    char alphabet='A';
    
    printf("\n-----------------*******--------------------\n");
    
  
    printf("\n Enter alphabet to print (a to z) alphabet: ");
    scanf("%ch",&alphabet);
    
    switch(alphabet)
    {
         case 'A':
         case 'a':
                printf("\n A - Apple..!");
                break;
        case 'B':
        case 'b':
                printf("\n B - Banana..!");
                break;
         case 'C':
         case 'c':
                printf("\n C - Cat..!");
                break;
        case 'D' :
        case 'd':
                printf("\n D - Dog..!");
                break;
        case 'E' :
        case 'e' :
                printf("\n E - Elephant..!");
               break;
        case 'F' : 
        case 'f':
                printf("\n F - Fish..!");
                break;
        case 'G' :
        case 'g':
                printf("\n G - Grapes..!");
               break;
        case 'H' :
        case 'h' :
                printf("\n H - Horse..!");
                break;
         case 'I':
         case 'i':
                printf("\n I - Ice cream..!");
                break;
         case 'J' :
         case 'j' :
                printf("\n J - Joker..!");
                break;
        case 'K' :
        case 'k' :
                printf("\n K - Kite..!");
                break;
        case 'L' :
        case 'l' :
                printf("\n L - Lion..!");
                break;
        case 'M' :
        case 'm' :
                printf("\n M - mango..!");
                break;
         case 'N' :
         case 'n' :
                printf("\n N - Nest..!");
                break;
        case 'O' :
        case 'o' :
                printf("\n O - Orange..!");
                break;
        case 'P' :
        case 'p' : 
                printf("\n P - Picock..!");
                break;
        case 'Q':
        case 'q' :
                printf("\n Q - Queen..!");
               break;
        case 'R':
        case 'r':
                printf("\n R - Rainbow..!");
               break;
        case 'S':
        case 's':
                printf("\n S - spoon..!");
               break;
        case 'T':
        case't':
                printf("\n T - Tiger..!");
                break;
         case 'U':
         case 'u':
                printf("\n U - Umbrella..!");
                break;
         case 'V':
         case 'v':
                printf("\n V - van..!");
                break;
        case 'W':
        case 'w':
                printf("\n W - Water..!");
                break;
        case 'X':
        case 'x':
                printf("\n x - xerox..!");
               break;
         case 'Y':
        case 'y':
                printf("\n Y - Yack..!");
                break;
        case 'Z':
        case 'z':
                printf("\n Z - Zebra..!");
               break;      
        default:
                printf("\n Invalid input..!!\n No alphabet found..");     
    }

    printf("\n----------------*******-----------------\n");
     getch();
     return 0;
}
    
