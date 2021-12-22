// Cursor_1
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char key,key1;

	while ((key=getche()) != 'x')
	{
		if (key==0)
		{ 
			key1=getch();
			printf("%3d %3d", key, key1);
		}
		else
		{
			printf("%3d", key);
		}
		printf("\n-----------------\n");
	}
	return 0;
}
