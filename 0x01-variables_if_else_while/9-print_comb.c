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
		if (i == 9)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	return (0);
}
