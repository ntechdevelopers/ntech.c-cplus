#include<stdio.h>
#include<conio.h>
#include<math.h>


#define vao "equation.inp"
#define ra "equation.out"

int main()
{
  //khai bao
  FILE *f1,*f2;
  int a,b,c;
  float d,x,x1,x2;

  // nhap du lieu
  f1=fopen (vao,"r");
  fscanf (f1,"%d%d%d",&a,&b,&c);
  fclose (f1);
  
  //xu ly va xuat du lieu
  f2=fopen (ra,"w");
  if (a!=0)
  {
      d =b*b-(4*a*c);
      if (d>0)
      {
          x1 =-b-sqrt(d)/(2*a);
          x2 =-b+sqrt(d)/(2*a);
          fprintf (f2,"phuong trinh co nghiem phan biet :%f,%f",x1,x2);
      }
      else
      {
        if (d==0)
        {
            x =-b/(2*a);
            fprintf (f2,"phuong trinh co nghiem kep:%f",x);
        }    
        else
        {
            fprintf (f2,"phuong trinh vo nghiem");
        }
      }    
  }
  else
  {
     fprintf (f2,"phuong trinh la phuong trinh bac nhat");
  }
   
  fclose (f2);

  return 0;	
}
