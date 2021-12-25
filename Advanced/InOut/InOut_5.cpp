// InOut_5
#include <stdio.h> 
#include <conio.h>
#include <stdlib.h> 

int main()
{     
    FILE *fp;     
	char ch,string[81];     
	int count = 0;     
	int white=1; 
    

    if ((fp = fopen("InOut_5", "r")) == NULL) 
    {
        printf("Khong mo duoc tap tin\n");
        getch();
        exit(1);
    }
    
    while ((ch = getc(fp)) != EOF) 
    switch (ch) 
    {
        case ' ': // Neu co dau trong, dong moi hay tab
        case '\t':
        case '\n':
            white++;
            break;
        default:
            if (white) {
                white = 0;
                count++;
             }
    }
    
	fclose(fp);
	printf("Tap tin InOut_5 co %d tu", count);
	getch();
    
    return 0;
}
