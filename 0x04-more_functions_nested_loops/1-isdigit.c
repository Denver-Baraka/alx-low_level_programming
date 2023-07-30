/**
 * _isdigit - checks if an int is digit
 * @c: the int number
 *
 * Return: if is digit --> 1, else --> 0
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
