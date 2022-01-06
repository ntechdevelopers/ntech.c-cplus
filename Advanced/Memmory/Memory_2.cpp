// Memory_2
#include <conio.h>
#include <stdio.h> 
#define length 2000

int main() {     
    int far *fptr;     
    int add;     
    char ch;     
    printf("Go vao mot ki tu , go lai de thay doi");     
    fptr=(int far*)0xB8000000;     
    while((ch=getche())!='x')       
        for (add=0;add<length;add++)  
            *(fptr+add)=ch|0x0700;   
    
    return 0;
}
