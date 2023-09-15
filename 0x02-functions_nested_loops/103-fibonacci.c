#include "main.h"
#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms,
 *
 * Return: the value 0.
 */
int main(void)
{
	long int x1, x2, fn1, fn2;

	x1 = 1;
	x2 = 2;
	fn1 = fn2 = 0;
	while (fn1 <= 4000000)
	{
		fn1 = x1 + x2;
		x1 = x2;
		x2 = fn1;
		if ((x1 % 2) == 0)
		{
			fn2 += x1;
		}
	}
	printf("%ld\n", fn2);
	return (0);
}
