#include "main.h"
/**
 * _strncpy - copies source string to dest string
 * @dest: the string to hold the copied string
 * @src: the string to be copied
 * @n: terminate copying at nth character of src
 *
 * Return: return pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_len = str_len(src);
	/* int dest_len = str_len(dest); */
	int i = 0;

	while (i < n && i < src_len)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
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
