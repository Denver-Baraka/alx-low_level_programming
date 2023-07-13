#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Return: 0 success
 */

int main(void)
{
	int i;
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	i =  0;
	do {
		putchar(msg[i]);
		i++;
	} while (msg[i] != '\0');
	putchar('\n');

	return (1);
}
