#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Return: 0 success
 */

int main(void)
{
	int i;
	char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	
	i =  0;
	do
	{
		putchar(message[i]);
		i++;
	} while (message[i] != '\0');
	putchar('\n');

	return (0);
}
