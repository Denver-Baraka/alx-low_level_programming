#include "main.h"
/**
 * cap_string - returns title case
 * @s: string to title cased
 *
 * Return: returns pointer to the capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		while (is_sep(*(s + i)) == 1)
		{
			++i;
			if (*(s + i) >= 'a' && *(s + i) <= 'z')
				*(s + i) -= 'a' - 'A';
		}
		i++;
	}
	return (s);
}
/**
 * is_sep - checks for word separators
 * @s: character to be checked if it is separator
 *
 * Return:
 *	is separator ---> returns 1
 *	not separator --> returns 0
 */
int is_sep(char s)
{
	int i = 0;
	char separator[] = {' ', '\t', '\n', ',', ';', '.',
			    '!', '?', '"', '(', ')', '{', '}'};

	while (separator[i] != '\0')
	{
		if (s == separator[i])
			return (1);
		i++;
	}
	return (0);
}
