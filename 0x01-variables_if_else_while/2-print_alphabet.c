#include <stdio.h>

/**
 * main - starting point
 *
 * Return: success => 0
 */

int main(void)
{
	int i = 0;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	while (alphabet[i] != '\0')
	{
		putchar(alphabet[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
