#include <stdio.h>

int main(void)
{
  int i, m, n, sum = 0, multiple = 1, factorial = 1, vib = 1, sum2 = 0;
  
  scanf("%d", &n);
  
  for(i = 0; i <= n; i++)
  {
	if(i % 3)	{sum += i;}
  }	
  printf("%d", sum);
  return 0;
}