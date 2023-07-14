#include <stdio.h>

/**
 * main - starting point
 *
 * Return: success => 0
 */

int main(void)
{
	int i = 0x00;

	while (i < 0x10)
	{
		if (i < 0xA)
			putchar('0' + i);
		else
			putchar('a' + i - 10);
		i++;
	}
	putchar('\n');

	return (0);
}
