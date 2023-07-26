#include "main.h"

/**
 * _strcat - concanates two strings
 * @dest: string where source  would be appended to
 * @src: source string to be added to destination string
 *
 * Return: returns pointer to *dest
 */

char *_strcat(char *dest, char *src)
{
	int src_len = str_len(src);
	int dest_len = str_len(dest);
	int i = 0;

	while (i < src_len)
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
