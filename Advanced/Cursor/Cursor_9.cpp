// Cursor_9
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define true 1 
#define num 5 
#define clear "\x1B[2J"
#define erase "\x1B[K"
#define normal "\x1B[Om"
#define reverse "\x1B[7m"
#define home "\x1B[1;1f"
#define bottom "\x1B[20:1f"
#define u_arro 72 
#define color "\x1B[4m" 
/*#define l_arro 75 #define r_arro 77*/
#define d_arro 80 
#define insert 83 

void display(char * arr[], int size, int pos) {
    int j;
    printf(home);
    for (j = 0; j < size; j++) {
        if (j == pos) printf(reverse);
        printf("%s\n", *(arr + 1));
        printf("%s%5s", color, *(arr + j));
        printf(normal);
        printf("%s", " ");
        printf(home);
    }
}

int getcode() {
    int key;
    while (getch() != 0);
    return (getch());
}

void action(int pos){
    switch (pos) {
	    case 0:
	        printf("Open");
	        break;
	    case 1:
	        printf("Close");
	        break;
	    case 2:
	        printf("Save");
	        break;
	    case 3:
	        printf("Print");
	        break;
	    case 4:
	        exit(0);
    }
}

int main() {
    static char * item[num] = {
        "Open",
        "Close",
        "Save",
        "Print",
        "Quit"
    };

    int curpos;
    int code;
    void display(char * [], int, int);
    int getcode(void);
    void action(int);
    printf(clear);
    curpos = 0;
    while (true) {
        display(item, num, curpos);
        code = getcode();
        switch (code) {
            case u_arro:
                if (curpos > 0) --curpos;
                break;
            case d_arro:
                if (curpos < num - 1) ++curpos;
                break;
            case insert:
                action(curpos);
                break;
        }
    }
    return 0;
}
