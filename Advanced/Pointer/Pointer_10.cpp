// Pointer_10
#include <stdio.h>

int main()   
{
	float temp[3];
	float sum = 0.0;
	int num, day = 0;
	float *p;
	
	p = temp;
	do {
	 printf("Cho nhiet do ngay thu %d: ", day + 1);
	
	 scanf("%f", p);
	 day++;
	} while ( *(p++) > 0);
	p = temp;
	num = day - 1;
	for (day = 0; day < num; day++)
	{
		sum += *(p++);
	}
	printf("Nhiet do trung binh la : %.3f", sum / num);
	
	return 0; 
}   

