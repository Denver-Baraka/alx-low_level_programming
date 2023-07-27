/**
 * reverse_array - reverses order of array
 * @a: the array to be reversed
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < n / 2)
	{
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
		j--;
		i++;
	}
}
