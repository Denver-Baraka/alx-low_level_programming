#include "main.h"
/**
 * print_times_table - prints n by n times table
 * @n: size of the timetable, should not be more than 15
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (result > 99)
				{
					_putchar('0' + (result / 100));
					_putchar('0' + ((result % 100) / 10));
					_putchar('0' + (result % 10));
					print_separator(i, j, n);
				}
				else if (result > 9)
				{
					_putchar('0' + (result / 10));
					_putchar('0' + (result % 10));
					print_separator(i, j, n);
				}
				else
				{
					_putchar('0' + result);
					print_separator(i, j, n);
				}
			}
			_putchar('\n');
		}
	}
}
/**
 * print_separator - prints separators between numbers less than 1000
 * @a: first number
 * @b: second number
 * @n: maximum size
 */
void print_separator(int a, int b, int n)
{
	if (b != n)
	{
		_putchar(',');
		if ((a  * (b + 1)) > 99)
		{
			_putchar(' ');
		}
		else if ((a * (b + 1)) > 9)
		{
			_putchar(' ');
			_putchar(' ');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
	}
}
