#include <stdio.h>

int is_prime(int n);
int count_divisors(int n);

int main(void)
{
	int n, i, cnt = 0;
	
	puts("Homework #7-3");
	
	printf("n = ? ");
	scanf("%d", &n);
	
	printf("prime numbers under %d : ", n);	
	for(i = 2; i <= n; i++)
	{
		if(is_prime(i) == 1)
		{
			cnt ++;
			printf("%d ", i);
		}
	}
	
	if(cnt == 0)	printf("none\ntotal %d prime number", cnt);//none
	else if(cnt == 1)	printf("\ntotal %d prime number", cnt);//singular
	else			printf("\ntotal %d prime numbers", cnt);//plural
	
	return 0;
}

int is_prime(int n)
{
	int divisors_number = count_divisors(n);
	
	if(divisors_number == 2)	return 1;//prime number
	else						return 0;//non prime number
}

int count_divisors(int n)
{
	if(n <= 0)	{ return 0; }
	
	int i = 1, cnt = 0;
		
	while(1)
	{
		if(!(n % i))	cnt++;//n % i 값이 0이면 cnt++;
		if(i == n)	break;
		i++;
	}
	
	return cnt;
}