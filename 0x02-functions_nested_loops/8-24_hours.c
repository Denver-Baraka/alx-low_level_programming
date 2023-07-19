#include "main.h"
/**
 * jack_bauer - print all the minutes in a day
 *
 * Description:
 *	starts from 00:00 ----> 23:59
 */

void jack_bauer(void)
{
	int a, b, c, d, flag;

	a = b = c = d = flag = 0;

	while (a < 3)
	{
		while (b <= 9)
		{
			while (c < 6)
			{
				while (d <= 9)
				{
					print_output(a, b, c, d);

					if (a == 2 && b == 3 && c == 5 && d == 9)
					{
						flag = 1;
						break;
					}
					d++;
				}
				if (flag == 1)
					break;
				d = 0;
				c++;
			}
			if (flag == 1)
				break;
			c = 0;
			b++;
		}
		if (flag == 1)
			break;
		b = 0;
		a++;
	}
}

void print_output(int a, int b, int c, int d)
{
	_putchar('0' + a);
	_putchar('0' + b);
	_putchar(':');
	_putchar('0' + c);
	_putchar('0' + d);
	_putchar('\n');
}
