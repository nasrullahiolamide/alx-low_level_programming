#include <stdio.h>
#include <ctype.h>
int main() {
    char c;
    for (c = 'a'; c <= 'z'; ++c)
    {
        if (c == 'q' || c == 'e')
            continue;
        putchar(c);
    }
        
    
    // for (c = 'a'; c <= 'z'; ++c)
        // putchar(toupper(c));
    
    putchar('\n');
    return 0;
}
