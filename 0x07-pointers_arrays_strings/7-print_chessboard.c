#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: 8 by 8 chess matrix
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; a[j][i] != '\0'; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
