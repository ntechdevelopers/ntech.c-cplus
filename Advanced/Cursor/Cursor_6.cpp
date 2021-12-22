// Cursor_6
#include <stdio.h>
#include <conio.h>

#define true 1 
#define clear "\x1B[2J"
#define erase "\x1B[K"
int main() {
    int row = 1, col = 1;
    printf(clear);
    while (true) {
        printf("\x1B[23;1f");
        printf(erase);
        printf("Nhap vao so dong va so cot dang(20,40)");
        scanf("%d%d", & row, & col);
        printf("\x1B[%d;%df", row, col);
        printf("*(%d,%d)", row, col);
    }
    
    return 0;
}

