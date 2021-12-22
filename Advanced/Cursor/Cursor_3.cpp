// Cursor_3
#include <stdio.h>
#include <conio.h>

int main() {
    printf("Cho mot chuoi tan cung bang dau .:");
	while (getche() != '.')
	{
	  printf("\x1B[B");
	}
	getch();
    
    return 0;
}
