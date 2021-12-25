// InOut_22
#include <conio.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <fcntl.h> 
#include <string.h> 
#include <io.h> 
#define BUFFSIZE 1024 
char buff[BUFFSIZE];

void search(char * cau, int buflen) {
    char * p, * ptr;
    ptr = buff;
    while ((ptr = memchr(ptr, cau[0], buflen)) != NULL)
        if (memcmp(ptr, cau, strlen(cau)) == 0) 
        {
            printf("Tu xuat hien lan dau trong cau tai vi tri %d:\n", ptr - buff + 1);
            for (p = ptr; p < ptr + strlen(cau); p++) 
                putch( * p);
            exit(1);
        } 
        else 
            ptr++;
}

void main(int argc, char * argv[]) 
{
    int inhandle, bytes;
    void search(char * , int);

    if (argc != 3) 
    {
        printf("Dang <ten chuong trinh> <ten tap tin> <tu can tim>");
        getch();
        exit(1);
    }
    if ((inhandle = open(argv[1], O_TEXT)) < 0) 
    {
        printf("Khong mo duoc file %s\n", argv[1]);
        getch();
        exit(1);
    }
    while ((bytes = read(inhandle, buff, BUFFSIZE)) > 0) 
        search(argv[2], bytes);
    close(inhandle);
    printf("Khong tim thay");
    getch();
}

