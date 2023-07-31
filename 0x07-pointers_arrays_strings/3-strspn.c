#include "main.h"
/**
 * _strspn - gets lenght of a prefix substring
 * @s: string to be analyzed
 * @accept: string containing characters to match
 *
 * Return: length of the initial segment of str
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (is_subset(*(s + i), accept) == 0)
			return (i);
		i++;
	}
	return (i);
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

