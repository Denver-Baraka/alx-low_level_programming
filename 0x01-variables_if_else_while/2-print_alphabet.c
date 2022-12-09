#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 27; i++)
	{
		putchar (alphabet[i]);
		putchar ('\n');
	}

	return (0);
}
