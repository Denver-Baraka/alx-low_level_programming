#include <stdio.h>

/**
 * main -Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int qascii = 113;
	int eascii = 101;
	int l;

	while (i < 26)
	{
		l = alphabet[i];
		if (l == qascii || l == eascii)
		{
		}
		else
		{
		putchar (alphabet[i]);
		}
		i++;
		
	}
	putchar ('\n');

	return (0);
}
