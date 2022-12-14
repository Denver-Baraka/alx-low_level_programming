int _putchar(char c);

/**
 * print_alphabet -prints all lower alphabet letters
 * @abcdefghijklmopqrst letters to print
 *
 * print alphabet
 * Return: 0 success
 */

void print_alphabet_x10(void)
{
	int i;
	int j;
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";

	alphabet[26] = '\n';
	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 27 ; j++)
		{
			_putchar(alphabet[j]);
		}
	}
}
