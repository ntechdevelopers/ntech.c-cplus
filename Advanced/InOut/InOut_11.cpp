// InOut_11
#include <stdio.h> 
#include <stdlib.h>
#include <conio.h> 

void main(int argc,char *argv[])   
{     
    FILE *fp;     
    char string[81];     
    int count=0;     
    clrscr();     
    if (argc!=2)       
    {  
        printf("Format c:\<ten chuong trinh>  <ten tap tin>");  
        getch();  
        exit(1);       
    }     
    if ((fp=fopen(argv[1],"rb"))==NULL)       
    {  
        printf("Khong mo duoc tap tin\n");  
        getch();  
        exit(1);       
    }     
    while (getc(fp)!=EOF)       
        count++;     
    fclose(fp);     
    printf("Tap tin %s co %d ki tu",argv[1],count);     
    getch();   
    
}
