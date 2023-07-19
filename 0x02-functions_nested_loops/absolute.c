#include <stdio.h>

int main()
{
	int n;
	long abs;
	n = -2147483648;
	abs = (long)n;
	abs = abs * -1;
	printf("%ld", abs);
	return 0;
}
