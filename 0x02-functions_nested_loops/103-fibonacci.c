#include <stdio.h>
/**
 * main - starting point
 *
 * Return: 0 --> sucess
 */
int main(void)
{
	long a = 2, b = 4;
	long fibo;

	printf("%ld, %ld, ", a, b);

	while (fibo < 1500000)
	{
		fibo = a + b;
		a = b;
		b = fibo;
		printf("%ld, ", fibo);
	}
	fibo = a + b;
	printf("%ld\n", fibo);

	return (0);
}
