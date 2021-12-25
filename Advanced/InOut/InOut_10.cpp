// InOut_10
#include <stdio.h> 
#include<conio.h> 
#include <string.h> 

int main()   
{     
    FILE *fp;     
    char name[2];     
    int code,n,i;     
    float height;     
 
    fp=fopen("input.txt","r");     
    fscanf(fp,"%d",&n);     
    for (i=0;i<n;i++)       
    {  
        fscanf(fp,"%s%d%f\n",name,&code,&height);  
        printf("%s%3d%8.3f\n",name,code,height);    
    }     
    fclose(fp);     
    getch();   
    
    return 0;
}
