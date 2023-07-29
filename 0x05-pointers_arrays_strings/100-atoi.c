#include "main.h"
/**
 * _atoi - returns the int value of a string
 * @s: the string
 *
 * Return: 0 --> if no number
 *	     --> the number and its sign
 */
int _atoi(char *s)
{
	int i = 0, sum = 0, prev_sum = 0, value = 1;
	int sgn = sign(s);

	while (*(s + i) != '\0')
	{
		if (is_num(*(s + i)) == 1)
		{
			prev_sum *= value;
			sum = prev_sum + *(s + i) - '0';
			prev_sum = sum;
			value = 10;
			if (is_num(*(s + i + 1)) == 0)
				return (sum * sgn);
		}
		i++;
	}
	return (sum * sgn);
}
/**
 * is_num - checks if a character is a number
 * @c: the character
 *
 * Return:
 *	is number  ---> 1
 *	not number ---> 0
 */
int is_num(char c)
{
	int i = '0';

	while (i <= '9')
	{
		if (c == i)
			return (1);
		i++;
	}
	return (0);
}
/**
 * sign - returns the collective sign in a string
 * @s: the string
 *
 * Description: e.g --- should be -
 *		--++-- should be +
 * Return: if positive --> 1, negative --> -1
 */
int sign(char *s)
{
	int i = 0, sign = 1;

	while (*(s + i) != '\0' && is_num(*(s + i)) == 0)
	{
		if (*(s + i) == '-')
		{
			sign *= -1;
		}
		i++;
	}
	return (sign);
}
