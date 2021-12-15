// Pointer_6
#include <stdio.h>

int main()   
{
	int a[10], * pa, x;
	a[0] = 11;
	a[1] = 22;
	a[2] = 33;
	a[3] = 44;

	pa = & a[0];
	x = * pa;
	pa++;
	x = * pa;
	
	x = * pa + 1;
	x = * (pa + 1);
	x = * ++pa;
	x = ++ * pa;
	x = * pa++;
	
	return 0; 
}   

