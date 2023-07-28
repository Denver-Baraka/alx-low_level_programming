#include <stdio.h>
/**
 * main - starting point
 *
 * Return: 0 --> sucess
 */
int main(void)
{
	long a = 2, b = 4;
	long fibo, checker = 0;

	printf("%ld, %ld, ", a, b);

	while (checker < (4000000 - fibo - b - a))
	{
		fibo = a + b;
		a = b;
		b = fibo;
		printf("%ld, ", fibo);
		checker = fibo;
	}
	fibo = a + b;
	printf("%ld\n", fibo);

	return (0);
}
