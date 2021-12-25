// InOut_1
#include <stdio.h> 
#include <conio.h> 

int main()   
{     
	FILE *fp;
	char ch;
	printf("Nhap cac ki tu : ");
	
	fp=fopen("textfile","w");
	
	while ((ch=getche())!='\r')
		putc(ch,fp);
	
	fclose(fp);
	
	return 0;
} 
