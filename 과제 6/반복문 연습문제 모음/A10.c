#include <stdio.h>

int main(void)
{
  int i, n, sum = 0, factorial = 1, vib = 1, sum2 = 0;
  
  scanf("%d", &n);
  
  for(i = 1; i <= n; i++)
  {
    vib *= -1;
	sum += i;
	sum2 += vib * i * (sum);
  }
  printf("%d", sum2);
  
  return 0;
}