#include <stdio.h>
#include <ctype.h>
int main() {
    char i;
    char digit;
    for (i = 0; i < 10 ; i++)
    {
        digit = i + '0';
        putchar(digit);

    }
    
        
    // for (c = 'a'; c <= 'z'; ++c)
        // putchar(toupper(c));
    
    putchar('\n');
    return 0;
}
