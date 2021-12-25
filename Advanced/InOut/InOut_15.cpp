// InOut_15
#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 

int table[10]={1,2,3,4,5,6,7,8,9,10}; 
int main()   
{
    FILE * fp;

    if ((fp = fopen("table.rec", "wb")) == NULL) 
    {
        printf("Khong mo duoc file\n");
        getch();
        exit(1);
    }
    fwrite(table, sizeof(table), 1, fp);
    fclose(fp);
    
    return 0;
}
