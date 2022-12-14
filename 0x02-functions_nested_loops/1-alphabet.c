void print_alphabet(void)
{
	char alphabet[]="abcdefghijklmnopqrstuvwxyz";
	int i=0;

	while(i < 26)
	{
		_putchar(alphabet[i]);
		i++;
	}
	_putchar('\n');
}
