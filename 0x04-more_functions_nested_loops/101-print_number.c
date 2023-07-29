#include "main.h"
/**
 * print_number - prints a number using putchar
 * @num: the number
 */
void print_number(int num)
{
	int orig_num;
	int divisor = _divisor(num);
	int x = 0;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	orig_num = num;
	while (divisor > 9)
	{
		x = num / divisor;
		_putchar('0' + x);
		num = num - (x * divisor);
		divisor = divisor / 10;
	}
	_putchar((orig_num % 10) + '0');
}
/**
 * _divisor - returns divisor to a number
 * @n: the number
 *
 * Return: the divisor
 */
int _divisor(int n)
{
	int divisor = 1;

	if (n < 0)
		n *= -1;

	while (n > 9)
	{
		n /= 10;
		divisor *= 10;
	}
	return (divisor);
}
