// InOut_16
#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h>

int main() 
{
    FILE * fp;
    int a[10];
    int i;

    if ((fp = fopen("table.rec", "rb")) == NULL) 
    {
        printf("Khong mo duoc file\n");
        getch();
        exit(1);
    }
    for (i = 0; i < 10; i++) 
    {
        fread(a, sizeof(a), 10, fp);
        printf("\%3d", a[i]);
    }
    fclose(fp);
    getch();
    
    return 0;
}
