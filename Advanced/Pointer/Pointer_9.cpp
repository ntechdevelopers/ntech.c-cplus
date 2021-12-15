// Pointer_9
#include <stdio.h>

int main()   
{
	float temp[3];
	float sum = 0.0;
	int num, day = 0;
	
	do 
	{
	    printf("Cho nhiet do ngay thu %d: ", day + 1);
	    scanf("%f", temp + day);
	} 
	while ( * (temp + day++) > 0);
	num = day - 1;
	for (day = 0; day < num; day++) 
	{
		sum += * (temp + day);
	}
	printf("Nhiet do trung binh la : %.3f", sum / num);
	
	return 0; 
}   

