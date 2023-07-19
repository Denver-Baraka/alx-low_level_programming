#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Description:
 *	will print all alphabet letters in lower case
 *	followed by a newline 10 times
 *	print_alphabet_x10() --> abcdefghijklmnopqrstuvwxyz X10
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
