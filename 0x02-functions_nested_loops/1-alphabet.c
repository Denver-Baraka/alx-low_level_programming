int _putchar(char c);

/**
 * print_alphabet prints all lower alphabet letters
 * @abcdefghijklmopqrst letters to print
 * Return: 0 success
 */

void print_alphabet(void)
{
	int i = 0;
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	alphabet[26] = '\n';

	while (i < 27)
	{
		_putchar(alphabet[i]);
	
		i++;
	}
}
