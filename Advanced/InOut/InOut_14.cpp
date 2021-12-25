// InOut_14
#include <stdlib.h> 
#include <stdio.h> 
#include <conio.h> 

int main()   
{     
    FILE *fp;     
    struct nguoi {      
        char ten[30];      
        int so;      
        float cao;    
    }
    nv;     
   
    if((fp=fopen("nhanvien.rec","rb"))==NULL)   
    {  
        printf("Khong mo duoc file\n");  
        getch();  
        exit(1);       
    }

    do {
        printf("\nTen :%s\n", nv.ten);
        printf("Ma so :%03d\n", nv.so);
        printf("Chieu cao :%.2f\n", nv.cao);
    } 
    while (fread( & nv, sizeof(nv), 1, fp) == 1);
    fclose(fp);
    getch();
    
    return 0;
}
