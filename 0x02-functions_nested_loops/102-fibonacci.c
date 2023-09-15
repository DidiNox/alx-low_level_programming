#include "main.h"
#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: the value 0.
 */
int main(void)
{
	int i;
	long int x1, x2, fn;

	x1 = 1;
	x2 = 2;
	printf("%ld, %ld", x1, x2);
	for (i = 0; i < 48; i++)
	{
		fn = x1 + x2;
		printf(", %ld", fn);
		x1 = x2;
		x2 = fn;
	}
	printf("\n");
	return (0);
}
