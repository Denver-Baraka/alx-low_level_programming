/**
 * more_numbers - print 0 - 14 and newline 10 times
 */
void more_numbers(void)
{
	for (i = 0; i < 10; i++)
	{
		for (j = '0'; j < '15'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
