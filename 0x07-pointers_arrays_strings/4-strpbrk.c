#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - locates any set of bytes in a string
 * @s: a string
 * @accept: string containing the set of bytes
 *
 * Return: pointer to the 1st ocurrence of c in s
 *	   else --> returns NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (is_subset(*(s + i), accept))
			return (s + i);
		i++;
	}
	return (s);

	return (NULL);
}
/**
 * is_subset - checks if a character is contained in string
 * @c: the character
 * @set: the string set
 *
 * Return: is contained --> 1, else --> 0
 */
int is_subset(char c, char *set)
{
	int i = 0;

	while (*(set + i) != '\0')
	{
		if (c == *(set + i))
			return (1);
		i++;
	}
	return (0);
}
