// InOut_7
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <conio.h> 

int main()
{
    FILE * fp;
    char string[81];

    if ((fp = fopen("b.txt", "r")) == NULL) 
    {
        printf("Khong mo duoc tap tin\n");
        getch();
        exit(1);
    }
    while (fgets(string, 81, fp) != NULL) 
        printf("%s", string);
    fclose(fp);
    getch();
    
    return 0;
}
