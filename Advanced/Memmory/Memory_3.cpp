// Memory_3
#include <conio.h> 
#include <stdio.h> 
#define rowmax 25 
#define colmax 80

void main() {
    int far * fptr;
    int row, col;
    char ch;

    printf("Go vao mot ki tu , go lai de thay doi");
    fptr = (int far * ) 0xB8000000;
    while ((ch = getche()) != 'x')
        for (row = 0; row < rowmax; row++)
            for (col = 0; col < colmax; col++) * (fptr + row * colmax + col) = ch | 0x0700;
            
    return 0;
}
