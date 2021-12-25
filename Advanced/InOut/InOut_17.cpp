// InOut_17
#include <stdlib.h> 
#include <stdio.h> 
#include <conio.h> 
#define true 1 
struct nguoi {         
    char ten[30];         
    int so;         
    float cao;       
}; 
struct nguoi nv[10]; 
int n=0; 
char numstr[10];

void newname() 
{
    char numstr[81];
    printf("\nBan ghi so %d\nCho ten : ", n + 1);
    gets(nv[n].ten);
    printf("Cho ma so co 3 chu so : ");
    gets(numstr);
    nv[n].so = atoi(numstr);
    printf("Cho chieu cao :");
    gets(numstr);
    nv[n++].cao = atof(numstr);
}
void listall() 
{
    int j;
    if (n < 1) printf("Danh sach rong\n");
    for (j = 0; j < n; j++) 
    {
        printf("\nBan ghi so %d\n", j + 1);
        printf("Ten :%s\n", nv[j].ten);
        printf("Ma nhan vien : %3d\n", nv[j].so);
        printf("Chieu cao :%4.2f\n", nv[j].cao);
    }
}

void wfile() {
    FILE * fp;
    if (n < 1) {
        printf("Danh sach rong , khong ghi\n");
        getch();
        exit(1);
    }
    if ((fp = fopen("nv.rec", "wb")) == NULL) 
    {
        printf("Khong mo duoc file\n");
        getch();
        exit(1);
    } 
    else 
    {
        fwrite(nv, sizeof(nv[0]), n, fp);
        fclose(fp);
        printf("Da ghi %3d ban ghi len dia\n", n);
    }
}

void rfile() 
{
    FILE * fp;
    if ((fp = fopen("nv.rec", "rb")) == NULL) 
    {
        printf("Khong mo duoc file\n");
        getch();
        exit(1);
    } 
    else 
    {
        while (fread( & nv[n], sizeof(nv[n]), 1, fp) == 1) 
        {
            printf("Ban ghi so %3d\n", n + 1);
            printf("Ten nhan vien :%s\n", nv[n].ten);
            printf("Ma nhan vien :%3d\n", nv[n].so);
            printf("Chieu cao cua nhan vien :%.2f\n", nv[n].cao);
            getch();
            n++;
        }
        fclose(fp);
        printf("Xong ! Tong so ban ghi da doc %3d\n", n);
    }
}

int main() {
    char ch;
    void newname(void);
    void listall(void);
    void wfile(void);
    void rfile(void);

    while (true) 
    {
        printf("\nGo 'e' de nhap nhan vien moi\n");
        printf("Go 'l'de liet ke nhan vien\n");
        printf("Go 'w' de ghi len dia\n");
        printf("Go 'r'de doc file tu dia\n");
        printf("Go 'q' de ket thuc chuong trinh\n\n");
        ch = getch();
        switch (ch) 
        {
            case 'e':
                newname();
                break;
            case 'l':
                listall();
                break;
            case 'w':
                wfile();
                break;
            case 'r':
                rfile();
                break;
            case 'q':
                exit(1);
            default:
                printf("Nhap sai ki tu , chon lai!");
        }
    }
}


