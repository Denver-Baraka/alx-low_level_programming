/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return:
 *	success --> length of the string without the null
 */

int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}

	return (length);
}
