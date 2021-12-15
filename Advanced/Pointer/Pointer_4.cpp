// Pointer_4
#include <stdio.h>

int main()   
{
	int i, j, * p;

 	i = 5;
 	p = & i;
 	j = * p;* p = j + 2;

	return 0; 
}   

