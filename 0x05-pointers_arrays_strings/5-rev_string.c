/**
 * rev_string - reverses stored string
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int str_len = 0, i, j;

	while (*(s + str_len) != '\0')
	{
		str_len++;
	}

	int temp[str_len];

	for (i = 0; i < str_len; i++)
	{
		temp[i] = *(s + i);
	}

	i = 0;
	for (j = (str_len - 1); j >= 0; j--)
	{
		*(s + i) = temp[j];
		i++;
	}
}
