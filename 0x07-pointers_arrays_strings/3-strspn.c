#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (is_subset(*(s + i), accept) == 0)
			return (i);
		i++;
	}
	return (i + 1);
}
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

