#include <stdio.h>

int fibonacci(int n);
/**
 * main - starting point
 *
 * Return: 0 --> sucess
 */
int main(void)
{
	int i;

	for (i = 1; i <= 50; i++)
	{
		printf("%d, ", fibonacci(i));
	}
	printf("\n");

	return (0);
}
/**
 * fibonacci - prints the fibonacci series
 * @n: nth fiboacci
 *
 * Return: the fibonacci number
 */
int fibonacci(int n)
{
	if (n == 2)
		return (2);
	else if (n == 1)
		return (1);
	else
		return (fibonacci(n - 2) + fibonacci(n - 1));
}
