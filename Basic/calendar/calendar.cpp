#include<stdio.h>
#include<conio.h>
#include<math.h>

#define vao "calendar.inp"
#define ra "calendar.out"

int main()
{
	  //khai bao
	  FILE *f1,*f2;
	  int a,b;
	
	  // nhap du lieu
	  f1=fopen (vao,"r");
	 
	  fscanf (f1,"%d%d",&a,&b);
	
	  fclose (f1);
	  //xu ly va xuat du lieu
	  f2=fopen (ra,"w");
	  if (a>=0 && a<=12 && b>0)
	  {
	       switch (a)
	      {
	         case 1 : fprintf (f2,"thang %d nam %d co 31 ngay",a,b);break;
	         case 2 :
	              if (b%4==0)
	              	fprintf (f2,"thang %d nam %d co 29 ngay",a,b);
	              else 
				  	fprintf (f2,"thang %d nam %d co 28 ngay",a,b);
	              break;
	         case 3 : fprintf (f2,"thang %d nam %d co 31 ngay",a,b);break;
	         case 4 : fprintf (f2,"thang %d nam %d co 30 ngay",a,b);break;
	         case 5 : fprintf (f2,"thang %d nam %d co 31 ngay",a,b);break;
	         case 6 : fprintf (f2,"thang %d nam %dco 30 ngay",a,b);break;
	         case 7 : fprintf (f2,"thang %d nam %d co 31 ngay",a,b);break;
	         case 8 : fprintf (f2,"thang %d nam %d co 31 ngay",a,b);break;
	         case 9 : fprintf (f2,"thang %d nam %d co 30 ngay",a,b);break;
	         case 10 : fprintf (f2,"thang %d nam %d co 31 ngay",a,b);break;
	         case 11 : fprintf (f2,"thang %d nam %d co 30 ngay",a,b);break;
	         case 12 : fprintf (f2,"thang %d nam %d co 31 ngay",a,b);break;
	     }
	  }  
	  else fprintf (f2,"ban nhap khong dung");
	  fclose (f2);

	  return 0;
}
