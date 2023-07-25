/**
 * swap_int - swaps two integers
 * @a: first integer
 * @b: second integer
 *
 * Description:
 *	if a = 5 , b = 10
 *	swap_int(*a, *b) --> a = 10, b = 5
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
