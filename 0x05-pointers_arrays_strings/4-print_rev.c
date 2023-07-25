#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int i = 0, str_len = 0;

	while (*(s + str_len) != '\0')
	{
		str_len++;
	}

	for (i = str_len; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
