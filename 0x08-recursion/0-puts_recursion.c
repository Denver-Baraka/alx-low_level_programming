#include "main.h"

/**
 * _puts_recursion - puts done with recursion
 * @s: the string to be output with puts
 *
 * Return: recursive
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
