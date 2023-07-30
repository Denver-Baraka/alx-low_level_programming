#include "main.h"
/**
 * print_triangle - prints triangular shape using hashes
 * @size: base size
 */
void print_triangle(int size)
{
	int hashes;
	int spaces = size - 1;

	if (size <= 0)
		_putchar('\n');

	for (hashes = 1; hashes <= size; hashes++)
	{
		print_xters(spaces, ' ');
		print_xters(hashes, '#');
		_putchar('\n');
		spaces--;
	}
}
/**
 * print_xters - prints a string of character
 * @n: how many times the character should be printed
 * @c: the character
 */
void print_xters(int n, int c)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(c);
	}
}
