#include <stdio.h>
int rev(int i, int j);
/**
 * main - start
 *
 * Return: 0 --> success
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i == j || j == k  || i == k)
				{
				}
				else if (rev(i, j) && rev(j, k) && rev(i, k))
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i == 7 && j == 8 && k == 9)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				else
				{
				}
			}
		}
	}
	return (0);
}
/**
 * rev - checks if a number has been previously printed
 * @i: number
 * @j: number remember it putchar
 *
 * Return: if true --> 0 else 1
 */
int rev(int i, int j)
{
	int prev = (j * 10) + i;
	int current = (i * 10) + j;

	if (current > prev)
		return (0);
	return (1);
}
