#include "main.h"

/**
 * print_last_digit - returns the last digit of a number
 * @n: the number whose last digit is to be returned
 *
 * Return: last digit of the number (n)
 */

int print_last_digit(int n)
{
	int last_digit;
	long number = (long)n;

	if (number < 0)
		number = number * -1;

	last_digit = number % 10;
	_putchar('0' + last_digit);

	return (last_digit);
}
