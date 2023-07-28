#include <stdio.h>
/**
 * main - program that computes sum of all multiples
 *	  of 3 and 5 below 1024 and prints it
 *
 * Return: success --> 0;
 */
int main(void)
{
	int i = 0;
	int n = 1024;
	int sum = 0;

	while (i < n)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
