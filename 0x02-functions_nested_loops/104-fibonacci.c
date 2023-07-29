#include <stdio.h>
/**
 * main - starting point
 *
 * Return: 0 --> sucess
 */
int main(void)
{
	int i = 0;
	unsigned long a = 1, b = 2;
	unsigned long fibo = 0;

	printf("%lu, %lu, ", a, b);

	while (i < 96)
	{
		fibo = a + b;
		a = b;
		b = fibo;
		printf("%lu, ", fibo);
		i++;
	}
	fibo = a + b;
	printf("%lu\n", fibo);
	return (0);
}
