#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints whichever statement best suit n, when generated.
 *
 * Return: returns the value 0.
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* code for checking if n is positive, negative or zero. */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
