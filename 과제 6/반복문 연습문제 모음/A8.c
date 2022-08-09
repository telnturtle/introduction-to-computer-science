#include <stdio.h>

int main(void)
{
  int i, n, sum = 0, factorial = 1, vib = 1;
  
  scanf("%d", &n);
  
  for(i = 1; i <= n; i++)
  {
    vib *= -1;
	sum += i * vib;
  }
  printf("%d", sum);
  
  return 0;
}