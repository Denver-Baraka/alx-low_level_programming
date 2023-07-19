/**
 * _isalpha - checks whether a character is alphabet
 * @c: character to be checked
 *
 * Return:
 *	alphabet --> 1
 *	not alphabet --> 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
