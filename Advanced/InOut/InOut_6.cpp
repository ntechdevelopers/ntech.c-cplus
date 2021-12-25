// InOut_6
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <conio.h> 

int main()   
{     
    FILE *fp;     
    char string[8];     
   
    if ((fp=fopen("a.txt","w"))==NULL)       
    {  
        printf("Khong mo duoc tap tin\n");  
        getch();  
        exit(1);       
    }     
    while (strlen(gets(string))>0)       
    {  
        fputs(string,fp);  
        fputs("\n",fp);       
    }     
    fclose(fp);   
    
    return 0;
}
