// InOut_20
#include <conio.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <fcntl.h> 
#include <io.h> 
#define BUFFSIZE 512 
char buff[BUFFSIZE]; 

void main(int argc,char *argv[])   
{     
    int inhandle,bytes,i;     
  
    if (argc!=2)       
    {  
        printf("Dang <ten chuong trinh>   <ten tap tin>");  
        getch();  
        exit(1);       
    }     
    if ((inhandle=open(argv[1],O_RDONLY|O_BINARY))<0)       
    {  
        printf("Khong mo duoc file\n");  
        getch();  
        exit(1);       
    }     
    while ((bytes=read(inhandle,buff,BUFFSIZE))>0)   
        for (i=0;i<bytes;i++)  
            putch(buff[i]);     
    close(inhandle);   
    
}
