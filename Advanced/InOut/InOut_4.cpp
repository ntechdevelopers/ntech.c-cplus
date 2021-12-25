// InOut_4
#include <stdio.h> 
#include <conio.h>
#include <stdlib.h> 

int main()
{     
    FILE *fp;
    
    char string[8];
    int count = 0;
    

    if ((fp = fopen("textfile", "r")) == NULL) 
    {
        printf("Khong mo duoc tap tin\n");
        getch();
        exit(1);
    }
    
    while (getc(fp) != EOF) 
        count++;
        
    fclose(fp);
    printf("Tap tin textfile co %d ki tu", count);
    getch();
    
    return 0;
}
