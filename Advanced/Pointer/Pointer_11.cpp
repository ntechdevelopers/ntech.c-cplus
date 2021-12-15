// Pointer_11
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()   
{
	char ch, line[81], * ptr;

	printf("Cho mot cau : ");
	gets(line);
	printf("Cho ki tu can tim : ");
	ch = getche();
	ptr = strchr(line, ch);
	printf("\nChuoi bat dau tai dia chi %u.\n", line);
	printf("Ki tu xuat hien lan dau tai %u.\n", ptr);
	printf("Do la vi tri %d", (ptr - line + 1));
		
	return 0; 
}   

