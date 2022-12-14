/**
 * _islower -check for lowercase
 * @c: ascii
 *
 * check for lower
 * Return: 1 success
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
