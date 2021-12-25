// InOut_12
#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 
#define length 10 
#define true 0 
#define false -1 

void main(int agrc,char *argv[])   
{
    FILE * fp;
    int ch;
    int j, noteof;
    unsigned char string[length + 1];

    if (agrc != 2) 
    {
        printf("Dang c:\<ten chuong trinh> <ten tap tin>");
        getch();
        exit(1);
    }
    if ((fp = fopen(argv[1], "rb")) == NULL) 
    {
        printf("Khong mo duoc tap tin\n");
        getch();
        exit(1);
    }
    noteof = true;
    do 
    {
        for (j = 0; j < length; j++) 
        {
            if ((ch = getc(fp)) == EOF) 
                noteof = false;
            printf("%3x", ch);
            if (ch > 31) 
                *(string + j) = ch; /* ki tu in duoc*/
            else 
                *(string + j) = '.'; /* ki tu khong in duoc*/
        }
        *(string + j) = '\0';
        printf("  %s\n", string);
    } 
    while (noteof == true);
    fclose(fp);
    getch();
}
