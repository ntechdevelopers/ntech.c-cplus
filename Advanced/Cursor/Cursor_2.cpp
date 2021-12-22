// Cursor_2
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    int key, key1;
    while ((key = getche()) != 'X')
        if (key == 0) {
            key1 = getch();
            switch (key1) {
            case 59:
                printf("Phim F1 duoc nhan\n");
                break;
            case 60:
                printf("Phim F2 duoc nhan\n");
                break;
            case 75:
                printf("Phim left arrow duoc nhan\n");
                break;
            default:
                printf("Phim mo rong khac duoc nhan\n");
                break;
            }
        } 
		else 
			printf("%3d", key);
    getch();
    
    return 0;
}
