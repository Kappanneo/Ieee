#include <stdio.h>
#include "./klib/klib.h"

int main(int argc, char* argv[])
{
  VET("[numero]");

  double num= deci(argv[1]);

  if(num<0)
    {
      printf("1 ");
      num= -num;
    }
  else printf("0 ");
  
  int e= 15;
  if(num>1)
    while(num>=2)
      {
	num/=2;
	e++;
      }
  else
    while(num<1 && e)
      {
	num*=2;
	e--;
      }
  char esp[5]; 
  charbin( e, esp, 5);
  printf("%s ", esp);

  if(e) num= 2*(num-1);
  for(int i=0; i<10; i++)
    {
      if(num>1)
	{
	  printf("1");
	  num-=1;
	}
      else printf("0");
      num*=2;
    }

  puts("");
  return 0;
}
