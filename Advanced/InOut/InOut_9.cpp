// InOut_9
#include <stdio.h> 
#include <conio.h> 

int main()   
{     
    FILE *p;     
    int i,n;     
    float x[4],y[4];     
  
    p=fopen("test.txt","w");    
    printf("Cho so cap so can nhap n = ");     
    scanf("%d",&n);     
    fprintf(p,"%d\n",n);     
    printf("Cho cac gia tri x va y\n");     
    for (i=0;i<n;i++)       
    {  
        scanf("%f%f",&x[i],&y[i]);  
        fprintf(p,"%f     %f\n",x[i],y[i]);       
        
    }     
    fclose(p);   
    
    return 0;
}
