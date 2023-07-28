#include <stdio.h>
/**
 * main - starting point
 *
 * Return: 0 --> sucess
 */
int main(void)
{
	int i = 0;
	long a = 1, b = 2;
	long fibo;

	printf("%ld, %ld, ", a, b);

	for (i = 3; i < 50; i++)
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
