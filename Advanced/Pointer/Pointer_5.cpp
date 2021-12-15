// Pointer_5
#include <stdio.h>

int main()   
{
	unsigned long int start;
	char *p;
	int t;

	printf("Nhap vao dia chi bat dau ma ban muon xem: ");
	scanf("%lu", &start);
	
	p = (char far *) start;
	for (t = 0;; t++, p++)
	{
	    if (!(t % 16)) 
		{
	        printf("%2x\n", * p);
	    }
	}

	return 0; 
}   

