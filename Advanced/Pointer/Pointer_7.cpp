// Pointer_7
#include <stdio.h>

int main()   
{
	static int num[] = {
	 92,
	 81,
	 70,
	 69,
	 58
	};
	int dex;
	
	for (dex = 0; dex < 5; dex++) 
	{
		printf("%d\n", num[dex]);
	}
	
	return 0; 
}   

