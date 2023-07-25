#include "main.h"

/**
 * _puts - prints all characters of a string then newline
 * @str: the string to be printed
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
