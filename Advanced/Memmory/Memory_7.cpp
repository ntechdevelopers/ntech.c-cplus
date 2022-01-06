// Memory_7
#include <conio.h> 
#include <dos.h> 
#define colmax 80 
#define rarrow 77 
#define larrow 75 
#define video 0x10 
#define norm 0x07 
#define blue 0x01 
#define bkspc 8 
#define altu 22 
#define ctrlc '\x03' 
int col=0; 
int length=0; 
int far *fptr; 
union REGS reg;

void cursor() {
    reg.h.ah = 2;
    reg.h.dl = col;
    reg.h.dh = 0;
    reg.h.bh = 0;
    int86(video, & reg, & reg);
}

void insert(char ch, char attr) {
    int i;
    for (i = length; i > col; i--) 
        * (fptr + i) = * (fptr + i - 1);
    *(fptr + col) = ch | attr << 8;
    ++length;
    ++col;
}

void del() {
    int i;
    for (i = col; i <= length; i++) 
        * (fptr + i - 1) = * (fptr + i);
    --length;
    --col;
}

void clear() {
    int j;
    for (j = 0; j < 2000; j++) 
        * (fptr + j) = 0x0700;
}

int main() {
    char ch, attr = norm;
    void clear(void);
    void cursor(void);
    void insert(char, char);
    void del(void);
    fptr = (int far * ) 0xB8000000;
    clear();
    cursor();
    while ((ch = getch()) != ctrlc) {
        if (ch == 0) {
            ch = getch();
            switch (ch) {
            case rarrow:
                if (col < length) ++col;
                break;
            case larrow:
                if (col > 0) --col;
                break;
            case altu:
                attr = (attr == norm) ? blue : norm;
            }
        } 
        else 
            switch (ch) {
                case bkspc:
                    if (length > 0) 
                        del();
                    break;
                default:
                    if (length < colmax) 
                        insert(ch, attr);
            }
        cursor();
    }
    
    return0;
}
