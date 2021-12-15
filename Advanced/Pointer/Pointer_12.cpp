// Pointer_12
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()   
{
	char * chao = "Xin chao !";

	char ten[30];
	
	printf("Cho ten cua ban : ");
	gets(ten);
	printf(chao);
	puts(ten);
	getch();
		
	return 0; 
}   

