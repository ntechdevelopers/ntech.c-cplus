// Cursor_10
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>     /* atoi */

int main() {
    char str[81];
	int key;

	printf("Nhap vao mot so cua phim chuc nang :");
	gets(str);
	key = atoi(str);
	printf("Nhap vao mot chuoi de gan phim nay : ");
	gets(str);
	printf("\x1B[0;%d;\"%s\";13p", key + 58, str);
    
    return 0;
}
