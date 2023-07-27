/**
 * string_toupper - converts string to uppercase
 * @s: string to be converted
 *
 * Return: returns pointer to s
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}

	return (s);
}
