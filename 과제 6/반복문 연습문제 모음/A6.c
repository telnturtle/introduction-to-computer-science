#include <stdio.h>

int main(void)
{
  int i, n, sum = 0, factorial = 1;
  
  scanf("%d", &n);
  
  for(i = 1; i <= n; i++)
  {
    factorial *= i;
  }
  printf("%d", factorial);
  return 0;
}