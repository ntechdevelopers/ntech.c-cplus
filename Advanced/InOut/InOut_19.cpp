// InOut_19
#include <stdio.h> 
#include<conio.h> 
#include <string.h> 
#include <stdlib.h> 

int main()   
{     
    FILE *fp;     
    char name[40],numstr[10];     
    int code;     
    float height;     
    int n,i;     
   
    fp=fopen("a:\newfile.txt","w");     
    printf("Cho so nguoi can nhap : ");     
    gets(numstr);     
    n=atoi(numstr);     
    for (i=0;i<n;i++)       
    {  
        printf("Nhap ten : ");  
        gets(name);  
        printf("Nhap ma so : ");  
        gets(numstr);  
        code=atoi(numstr);  
        printf("Nhap chieu cao : ");  
        gets(numstr);  
        height=atof(numstr);  
        fprintf(fp,"%s  %d  %f",name,code,height);  
        if (ferror(fp))    
        {      
            perror("Loi ghi file ");      
            getch();      
            exit(1);    
        }       
    }     
    fclose(fp);   
    
    return 0;
}
