#include <stdio.h>

int main(void)
{
  int i, n, sum = 0, factorial = 1, vib = 1;
  
  scanf("%d", &n);
  
  for(i = 1; i <= n; i++)
  {
    printf("%d", vib);
	vib *= -1;
  }
  
  return 0;
}