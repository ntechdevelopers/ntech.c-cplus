// Memory_6
#include <conio.h> 
#include <stdio.h> 
#define rowmax 25 
#define colmax 80 

void fill(char ch,char attr)   {     
    int far *fptr;     
    int row,col;     
    fptr=(int far*)0xB8000000;     
    for (row=0;row<rowmax;row++)
        for (col = 0; col < colmax; col++) 
            * (fptr + row * colmax + col) = ch | attr << 8;
}

int main()   {     
    int far *fptr;     
    char ch,attr=0x07;     
    void fill(char,char);     
  
    printf("Go n cho chu binh thuong,\n");    
    printf("Go b cho chu xanh nuoc bien,\n");     
    printf("Go i cho chu sang,\n");     
    printf("Go c cho chu chop nhay,\n");     
    printf("Go r cho chu dao mau\n");     
    while((ch=getche())!='x')   {  
        switch (ch)   {      
            case 'n':
                attr=0x07;      
                break;      
            case 'b':
                attr=attr&0x88;      
                attr=attr|0x01;      
                break;      
            case 'i':
                attr=attr^0x08;      
                break;      
            case 'c':
                attr=attr^0x80;      
                break;      
            case 'r':
                attr=attr&0x88;      
                attr=attr|0x70;      
                break;    
        }  
        fill(ch,attr);       
        
    }   
    
    return 0;
} 

