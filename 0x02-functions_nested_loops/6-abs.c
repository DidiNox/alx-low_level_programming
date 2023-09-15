#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer.
 * @n: an integer
 *
 * Return: returns the integer
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
		_putchar('\n');
	}
	else if (n < 0)
	{
		return (-n);
		_putchar('\n');
	}
	else
	{
		return (0);
		_putchar('\n');
	}

}
