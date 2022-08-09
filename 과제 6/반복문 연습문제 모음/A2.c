#include <stdio.h>

int main(void)
{
  int i, n, sum = 0;
  
  scanf("%d", &n);
  
  for(i = 1; i <= n; i++)
  {
    printf("%d", i * i);
  }
  
  return 0;
}