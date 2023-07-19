#include "main.h"

/**
 * print_alphabet - print all alphabet letters in lower case
 *
 * Example:
 *	print_alphabet() --> abcdefghijklmnopqrstuvwxyz
 */

void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
