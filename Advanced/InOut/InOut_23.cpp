// InOut_23
#include <conio.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <fcntl.h> 
#include <io.h> 
#include <sys\stat.h> 
#define BUFFSIZE 4096 
char buff[BUFFSIZE];

void main(int argc, char * argv[]) 
{
    int inhandle, outhandle, bytes;

    if (argc != 3) 
    {
        printf("Dang <ten chuong trinh> <ten tap tin 1> <ten tap tin 2>");
        getch();
        exit(1);
    }
    if ((inhandle = open(argv[1], O_RDWR | O_BINARY)) < 0) 
    {
        printf("Khong mo duoc file %s\n", argv[1]);
        getch();
        exit(1);
    }
    if ((outhandle = open(argv[2], O_CREAT | O_WRONLY | O_BINARY, S_IWRITE)) < 0) 
    {
        printf("Khong mo duoc file %s\n", argv[2]);
        getch();
        exit(1);
    }
    while ((bytes = read(inhandle, buff, BUFFSIZE)) > 0) 
        write(outhandle, buff, bytes);

    close(inhandle);
    close(outhandle);
    printf("Da chep xong");
    getch();
}
