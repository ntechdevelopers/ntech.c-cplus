// Cursor_5
#include <stdio.h>
#include <conio.h>

#define clear "\x1B[2J"
#define c_left "\x1B[D"
#define c_right "\x1B[C"
#define c_up "\x1B[A"
#define c_down "\x1B[B"
#define l_arrow 75 
#define r_arrow 77 
#define u_arrow 72 
#define d_arrow 80 
#define across 205 
#define updown 186 

int main() {
    int key;
    printf(clear);
    while ((key = getch()) == 0) {
        key = getche();
        
        switch (key) {
	        case l_arrow:
	            printf(c_left);
	            putch(across);
	            break;
	        case r_arrow:
	            printf(c_right);
	            putch(across);
	            break;
	        case u_arrow:
	            printf(c_up);
	            putch(updown);
	            break;
	        case d_arrow:
	            printf(c_down);
	            putch(updown);
	            break;
        }

        printf(c_left);
    }
    getch();
    return 0;
}
