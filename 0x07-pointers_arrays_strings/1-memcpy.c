/**
 * _memcpy - copies n bytes from src to dest
 * @dest: pointer to memory area dest
 * @src: pointer to memory area src
 * @n: n bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
