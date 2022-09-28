
// Non-smart phone number generator
    
    // input example: "7777 7 33 2 55 0 333 777 444 33 66 3 0 2 66 3 0 33 66 8 33 777"
    // output: "speak friend and enter"
    // inspired by STM CTF'22

#include <stdio.h>

char arr[10][4] = 
    {
            /*for 0*/ {' ', ' ', ' '},
               {/*nothing for 1*/'.'}, {'a', 'b', 'c'}, {'d', 'e', 'f'},
                      {'g', 'h', 'i'}, {'j', 'k', 'l'}, {'m', 'n', 'o'},
                 {'p', 'q', 'r', 's'}, {'t', 'u', 'v'}, {'w', 'x', 'y', 'z'}
    };

void printOut(int count, int c)
{
    printf("%c", arr[c][count-1]);
}


int main()
{
    int count=0;
    int type;
    char number;
    
    
    
    while ((number=getchar())!=EOF)
    {
        switch(number) 
        {
        case '0':
            type = 0;
        break; 
        
        
        case '2':
            type = 2;
        break; 
        case '3':
            type = 3;
        break; 
        case '4':
            type = 4;
        break; 
        case '5':
            type = 5;
        break; 
        case '6':
            type = 6;
        break; 
        case '7':
            type = 7;
        break; 
        case '8':
            type = 8;
        break; 
        case '9':
            type = 9;
        break; 
        
        case ' ':
            printOut(count, type);
            count = -1;
        break; 
        

        default :
        break;
        }
        if (count != -1) count++;
        else count = 0;
    
    }
    
    printOut(count, type);
    
    return 0;
}

