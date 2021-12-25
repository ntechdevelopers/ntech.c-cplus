// InOut_3
#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 

int main()   
{     
    FILE *fp;     
    int ch;     
   
    if ((fp=fopen("file","r"))==NULL)       
    {  
        printf("Khong mo duoc tap tin\n");  
        getch();  
        exit(1);       
        
    }     
    while ((ch=getc(fp))!=EOF)       
        printf("%c",ch);     
    fclose(fp);   
    
    return 0;
}
