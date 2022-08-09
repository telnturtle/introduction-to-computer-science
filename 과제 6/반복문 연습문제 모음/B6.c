#include <stdio.h>

int main(void)
{
  int i, m, n, sum = 0, cnt = 0, multiple = 1, factorial = 1, vib = 1, sum2 = 0;
  
  scanf("%d", &n);
  
  /*for(i = 0; i <= n; i++)
  {
	
  }	*/
  i = 1;
  while(i <= n)
  {
	if(n % i == 0)
	{
		printf("%d ", i);
		cnt++;
	}
  }
  printf("%d gae", cnt);
  return 0;
}