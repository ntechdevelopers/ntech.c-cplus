// Cursor_4
#include <stdio.h>
#include <conio.h>
#define c_down "\x1B[B"

int main() {
    while (getche() != '.') 
	{
		printf(c_down);
	}
    getch();
    
    return 0;
}
