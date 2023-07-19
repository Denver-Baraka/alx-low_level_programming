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
	int number;

	if (n < 0)
		number = n * -1;
	else
		number = n;

	last_digit = number % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
