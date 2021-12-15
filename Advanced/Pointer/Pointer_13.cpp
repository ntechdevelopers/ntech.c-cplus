// Pointer_13
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define max 5 

int main()   
{
	int dex;
	int enter = 0;
	char name[40];
	static char * list[max] = {
	    "Hung",
	    "Ngan",
	    "Van",
	    "Hoa",
	    "Ntech"
	};
	
	printf("Cho ten cua ban : ");
	gets(name);
	for (dex = 0; dex < max; dex++)
	    if (strcmp(list[dex], name) == 0) 
	        enter = 1;
	if (enter == 1) 
	    printf("Ban da dang ki hoc lop C");
	else printf("Ban chua dang ki vao lop");
	getch();

	return 0; 
}   

