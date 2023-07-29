#include <stdio.h>
long _factor(long n);
/**
 * main - a program to compute the largest factor of a number
 *
 * Return: sucess --> 0
 */
int main(void)
{
	long n = 612852475143;
	long factor = 0;
	long prime_factor = 0;

	while (n != 1)
	{
		factor = _factor(n);
		n = n / factor;
		if (factor > prime_factor)
			prime_factor = factor;
	}
	printf("%ld\n", prime_factor);
	return (0);
}
/**
 * _factor - returns the factor of a number
 * @n: the number
 *
 * Return: returns the factor
 *	   if no factor returns the number
 */
long _factor(long n)
{
	int i;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			return (i);
		}
	}
	return (n);
}

