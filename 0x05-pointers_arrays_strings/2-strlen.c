/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return:
 *	success --> length of the string without the null
 */

int _strlen(char *s)
{
	int i = 0, length;

	while (*(s + i) != '\0')
	{
		length++;
		i++;
	}

	return (length);
}
