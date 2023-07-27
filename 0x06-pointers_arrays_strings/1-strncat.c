#include "main.h"

/**
 * _strncat - concanates two strings to the given nth character
 * @dest: string where source  would be appended to
 * @src: source string to be added to destination string
 * @n: concanate to the nth character
 *
 * Return: returns pointer to *dest
 */

char *_strncat(char *dest, char *src, int n)
{
	/* int src_len = str_len(src); */
	int dest_len = str_len(dest);
	int i = 0;

	while (i < n)
	{
		*(dest + dest_len + i) = *(src + i);
		i++;
	}
	return (dest);
}

/**
 * str_len - returns length of a string
 * @s: the string whose length is needed
 *
 * Return: success --> length of the string
 */

int str_len(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}

	return (length);
}
