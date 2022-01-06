// Memory_4
#include <conio.h> 
#include <dos.h> 
#define colmax 80 
#define rarrow 77 
#define larrow 75 
#define video 0x10 
#define ctrlc '\x03' 

int col=0; 
int far *fptr; 
union REGS reg;

void cursor() {
    reg.h.ah = 2;
    reg.h.dl = col;
    reg.h.dh = 0;
    reg.h.bh = 0;
    int86(video, & reg, & reg);
}

void insert(char ch) {
    *(fptr + col) = ch | 0x0700;
    ++col;
}

void clear() {
    int j;
    for (j = 0; j < 2000; j++) 
        * (fptr + j) = 0x0700;
}

int main() {
    char ch;
    void clear(void);
    void cursor(void);
    void insert(char);
    fptr = (int far * ) 0xB8000000;
    clear();
    cursor();
    while ((ch = getch()) != ctrlc) {
        if (ch == 0) {
            ch = getch();
            switch (ch) {
            case rarrow:
                if (col < colmax) ++col;
                break;
            case larrow:
                if (col > 0) --col;
                break;
            }
        } else if (col < colmax) insert(ch);
        cursor();
    }
    
    return 0;
}


