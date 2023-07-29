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
	long fibo = 0;

	printf("%ld, %ld, ", a, b);

	while (i < 96)
	{
		fibo = a + b;
		a = b;
		b = fibo;
		printf("%ld, ", fibo);
		i++;
	}
	fibo = a + b;
	printf("%ld\n", fibo);
	return (0);
}
