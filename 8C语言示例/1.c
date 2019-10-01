#include <stdio.h>
int main(int argc, char *argv[])
{
  int a,b,c;
  for (a=1;a<5;a++)
    for (b=1;b<5;b++)
      for (c=1; c<5; c++)
	{
	  if(c!=b&&a!=c&&b!=c)
	    printf ("%d,%d,%d\n",a,b,c);
	}
  return 0;
}
