#include <stdio.h>

int main(void)
{
  int i, m, n, sum = 0, multiple = 1, factorial = 1, vib = 1, sum2 = 0;
  
  scanf("%d", &n);
  
  for(i = 0; i <= n; i++)
  {
	if(i % 7 == 0)	{printf("%d ", i);}
  }	
  printf("%d", multiple);
  return 0;
}