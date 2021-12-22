// Cursor_8
#include <stdio.h>
#include <conio.h>

#define NORMAL "\x1B[Om"
#define BOLD "\x1B[1m"
#define UNDER "\x1B[4m"
#define BLINK "\x1B[5m"
#define REVERSE "\x1B[7m"
int main() {
    printf("normal%s blink %s normal \n\n", BLINK, NORMAL);
    printf("normal%s bold %s normal \n\n", BOLD, NORMAL);
    printf("normal%s underline %s normal \n\n", UNDER, NORMAL);
    printf("normal%s reversed %s normal \n\n", REVERSE, NORMAL);
    printf("%s%s reversed and blink %s \n\n", BLINK, REVERSE, NORMAL);
    
    return 0;
}
