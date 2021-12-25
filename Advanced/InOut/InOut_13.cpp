// InOut_13
#include <stdlib.h> 
#include <stdio.h> 
#include <conio.h> 

int main()   
{     
    char chso[10];     
    FILE *fp;
    struct nguoi {
        char ten[30];
        int so;
        float cao;
    }
    nv;

    if ((fp = fopen("nhanvien.rec", "wb")) == NULL) 
    {
        printf("Khong mo duoc file\n");
        getch();
        exit(1);
    }
    do 
    {
        printf("\nCho ten : ");
        gets(nv.ten);
        printf("Cho ma so : ");
        gets(chso);
        nv.so = atoi(chso);
        printf("Cho chieu cao :");
        gets(chso);
        nv.cao = atof(chso);
        fwrite( & nv, sizeof(nv), 1, fp);
        printf("Tiep tuc khong y/n?");
    } 
    while (getch() == 'y');
    fclose(fp);
    
    return 0;
}
