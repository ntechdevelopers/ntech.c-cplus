// Memory_1
#include <conio.h> 
#include <stdio.h>

int main() {
  int i, num, bit;
  unsigned int mask;
  char string[10], ch;

  do {
    mask = 0x8000;
    printf("\nBan cho mot so : ");
    scanf("%x", & num);
    printf("Dang nhi phan cua so %x la : ", num);
    for (i = 0; i < 16; i++) {
      bit = (mask & num) ? 1 : 0;
      printf("%d", bit);
      if (i == 7) printf("  ");
      mask >>= 1;
    }
    printf("\nBan muon tinh tiep khong(c/k)?");
    ch = getch();
  } while (ch == 'c');
  getch();
  
  return 0;
}
