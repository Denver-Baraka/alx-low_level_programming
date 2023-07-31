/**
 * _memset - fills n memory adresses with a byte
 * @s: start filling memory from the adress pointed to by this
 * @b: the byte to fill up the adresses
 * @n: n adresses
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
