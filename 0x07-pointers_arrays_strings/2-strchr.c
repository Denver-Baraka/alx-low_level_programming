#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: a string
 * @c: the character
 *
 * Return: pointer to the 1st ocurrence of c in s
 *	   else --> returns NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	if (s == NULL)
		return (NULL);

	while (*(s + i) != '\0')
	{
		if (c == *(s + i))
			return (s + i);
		i++;
	}

	return (NULL);
}
