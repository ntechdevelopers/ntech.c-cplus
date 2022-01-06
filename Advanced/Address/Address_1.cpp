// Address_1
#include <dos.h> 
#include <conio.h> 
#include <stdio.h> 

int main()   {     
    unsigned char far *p;     
    int n,k;     
    unsigned seg,off;     
     
    p=(unsigned char far*)MK_FP(0,0);

    while (1) {
        printf("\nSo hieu ngat(Bam 0 de ket thuc): ");
        scanf("%d", & n);
        if (n == 0) 
            break;
        k = (n - 1) * 4;
        off = p[k] + 256 * p[k + 1];
        seg=p[k+2]+256*p[k+3];  
        printf("\nDia chi cua ngat %x : %x",seg,off);       
    }  
    return 0
}
