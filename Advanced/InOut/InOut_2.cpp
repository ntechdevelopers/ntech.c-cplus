// InOut_2
#include <stdio.h> 
#include <conio.h> 

int main()   
{     
	FILE * fp;
	int ch;

	fp = fopen("textfile", "r");
	
	while ((ch = getc(fp)) != EOF)
	    printf("%c", ch);
	    
	fclose(fp);
	getch();
	
	return 0;
} 
