// InOut_18
#include <stdlib.h> 
#include <stdio.h> 
#include <conio.h> 

int main()   
{     
    struct nguoi {      
        char ten[30];      
        int so;      
        float cao;    
    }
    nv;     
    int recno;     
    FILE *fp;     
    long int offset;     
   
    if ((fp=fopen("nhanvien.rec","r"))==NULL)   
    {  
        printf("Khong mo duoc file\n");  
        getch();  
        exit(1);       
    }     
    printf("Ban muon doc ban ghi thu may : "); 
    scanf("%d",&recno);     
    recno--;    
    offset=recno*sizeof(nv);   
    
    if (fseek(fp,offset,0)!=0)       
    {  
        printf("Khong di chuyen duoc con tro file toi do\n");  
        getch();  
        exit(1);       
    }     
    fread(&nv,sizeof(nv),1,fp);     
    printf("Ten :%s\n",nv.ten);     
    printf("Ma nhan vien : %3d\n",nv.so);    
    printf("Chieu cao :%4.2f\n",nv.cao);     
    getch();   
    
    return 0;
}
