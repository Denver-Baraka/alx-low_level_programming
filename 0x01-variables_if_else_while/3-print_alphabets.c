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
	char alphabet_caps[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (alphabet[i] != '\0')
	{
		putchar(alphabet[i]);
		i++;
	}

	i = 0;
	while (alphabet_caps[i] != '\0')
	{
		putchar(alphabet_caps[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
