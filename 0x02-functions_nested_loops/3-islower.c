/**
 * _islower - checks whether a character is lowercase
 * @c: character to be checked
 *
 * Return:
 *	lowercase --> 1
 *	uppercase --> 0
 */

int _islower(int c)
{
	if (c >= 'a' && 'c' <= 'z')
		return (1);
	else
		return (0);
}

