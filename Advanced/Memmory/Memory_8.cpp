// Memory_8
#include <conio.h> 
#include <stdio.h> 
#define eqlist 0x410 
#define memsiz 0x413

int main()   {     
    int far *fptr;     
    unsigned int eq,data;     
  
    fptr=(int far *)eqlist;     
    eq=*(fptr);     
    data=eq>>14;     
    printf("So may in la : %d\n",data);     
    if (eq&0x2000)       
        printf("Co may in noi tiep\n");     
    data=(eq>>9)&7;     
    printf("So cong noi tiep la :%d\n",data+1);     
    if (eq&1)   {  
        data=(eq>>6)&3;  
        printf("So dia mem la :%d\n",data);       
    }     
    else
        printf("Khong co dia mem\n");
    data = (eq >> 4) & 3;

    switch (data) {
        case 1:
            printf("Man hinh mau 40 cot\n");
            break;
        case 2:
            printf("Man hinh mau 80 cot\n");
            break;
        case 3:
            printf("Man hinh don sac 80 cot\n");
    }
    fptr = (int far * ) memsiz;
    printf("Dung luong bo nho :%dKbyte\n", *(fptr));
    getch();
    
    return 0;
}
