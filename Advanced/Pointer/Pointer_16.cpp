// Pointer_16
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define row 4 
#define col 5

int main()   
{
	static int table[row][col] = {
	  {
	      13,15,17,19,21
	  },
	  {
	      20,22,24,26,28
	  },
	  {
	      31,33,35,37,39
	  },
	  {
	      40,42,44,46,48
	  }
	};
	int c = 10;
	int i, j;

	for (i = 0; i < row; i++)
	{
	  	for (j = 0; j < col; j++)
	  	{	 
	  		*(*(table + i) + j) += c;
	  	}
	}
	for (i = 0; i < row; i++) 
	{
	  	for (j = 0; j < col; j++)
	  	{ 
	  		printf("%5d", *( * (table + i) + j));
		}
	  	printf("\n");
	}
	getch();

	return 0; 
}   

