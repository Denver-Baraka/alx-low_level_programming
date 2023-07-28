#include "main.h"
/**
 * times_table - prints 9 by 9 times table
 */
void times_table(void)
{
	int i, j, result, sec_digit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (result > 9)
			{
				sec_digit = (result - (result % 10)) / 10;
				_putchar('0' + sec_digit);
				_putchar('0' + (result % 10));
				if (j != 9)
					print_separator(i, j);
			}
			else
			{
				_putchar('0' + result);
				if (j != 9)
					print_separator(i, j);
			}
		}
		_putchar('\n');
	}
}
/**
 * print_separator - prints separators between numbers less than 100
 * @a: first number
 * @b: second number
 */
void print_separator(int a, int b)
{
	_putchar(',');
	if ((a  * ++b) > 9)
	{
		_putchar(' ');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
	}
}
