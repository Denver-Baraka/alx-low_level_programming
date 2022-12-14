int _putchar(char c);

/**
 * print_alphabet prints all lower alphabet letters
 * @abcdefghijklmopqrst letters to print
 * Return: 0 success
 */

void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		_putchar(alphabet[i]);
	
		i++;
	}
}
