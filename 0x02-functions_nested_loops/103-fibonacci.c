#include <stdio.h>
/**
 * main - starting point
 *
 * Return: 0 --> sucess
 */
int main(void)
{
	long a = 1, b = 2;
	long fibo, sum = 0;

	while (fibo < 4000000)
	{
		fibo = a + b;
		a = b;
		b = fibo;
		if (fibo % 2 == 0)
		{
			sum = fibo + sum;
		}
	}
	printf("%ld\n", sum);

	return (0);
}
