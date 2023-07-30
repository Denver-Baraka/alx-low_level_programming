/**
 * _isupper - checks if a character is uppercase
 * @c: the character
 *
 * Return: uppercase --> 1, else --> 0
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
