#include <stdio.h>

int fibonacci(unsigned int n);

int main(void)
{
	int i;
	
	puts("Homework #7-4");
	
	for(i = 1; i <= 10; i++)
	{
		printf("%d\n", fibonacci(i));
	}
	
	return 0;
}

int fibonacci(unsigned int n)
{
	if (n < 2)			return n;
	else				return fibonacci(n - 1) + fibonacci(n - 2);
}