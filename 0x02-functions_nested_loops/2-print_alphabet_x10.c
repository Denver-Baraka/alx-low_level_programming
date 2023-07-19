#include "main.h"

/**
 * print_alphabet_x10 - executes print_alphabet() 10 times
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

/**
 * print_alphabet - prints all letters of the alphabet
 *
 * Description:
 *	lowercase and followed by newline
 *	abcdefghijklmonpqrstuvwxyz
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
