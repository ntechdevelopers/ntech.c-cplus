// Cursor_7
#include <stdio.h>
#include <conio.h>

#define size1 5 
#define size2 4 
#define clear "\x1B[2J"

void display(char * arr[], int size, int hpos) 
{
    int j;
    for (j = 0; j < size; j++) {
        printf("\x1B[%d", j + 1, hpos);
        printf("%s\n", *(arr + j));
    }
}

int main() {
    static char * menu1[] = {
        "Open",
        "Close",
        "Save",
        "Print",
        "Quit"
    };
    static char * menu2[] = {
        "Cut",
        "Copy",
        "Paste",
        "Reformat"
    };
    void display(char * [], int, int);

    printf(clear);
    display(menu1, size1, 20);
    display(menu2, size2, 20);
    getch();
    
    return 0;
}


