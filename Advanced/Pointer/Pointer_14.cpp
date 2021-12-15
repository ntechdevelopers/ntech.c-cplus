// Pointer_14
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define maxnum 3
#define maxlen 10

int main()   
{
	static char name[maxnum][maxlen];
	char *ptr[maxnum];
	char *temp;
	int count = 0;
	int in, out;
	
	while (count < maxnum) 
	{
		 printf("Ban cho ten : ");
		 gets(name[count]);
		 if (strlen(name[count]) == 0) 
		 	break;
		 ptr[count] = name[count];
		 count++;
	}

	for (out = 0; out < count - 1; out++)
	{
	  for (in = out + 1; in < count; in++)
	  {
	     if (strcmp(ptr[out], ptr[ in ]) > 0)
	     {
	         temp = ptr[in];
	         ptr[in] = ptr[out];
	         ptr[out] = temp;
	     }
	  }
	}
	printf("Danh sach da sap xep :\n");
	for (out = 0; out < count; out++) 
	{
	    printf("Ten thu %d : %s\n", out + 1, ptr[out]);
	}
	getch();

	return 0; 
}   

