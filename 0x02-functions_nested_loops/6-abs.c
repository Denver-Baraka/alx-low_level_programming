/**
 * _abs - returns absolute value of a number
 * @n: number whose absolute value is needed
 *
 * Return:
 *	absolute(n)
 */

int _abs(int n)
{
	if (n == -2147483648)
	{
		n = n + 1;
		return (n * (-1));
	}
	else if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}
