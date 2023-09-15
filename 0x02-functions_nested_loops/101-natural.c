#include "main.h"
#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: the value 0.
 */
int main(void)
{
	int i, n;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
		{
			n += i;
		}
	}
	printf("%d\n", n);
	return (0);
}
