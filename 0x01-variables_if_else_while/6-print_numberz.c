#include <stdio.h>

/**
 * main - starting point
 *
 * Return: success => 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');

	return (0);
}
