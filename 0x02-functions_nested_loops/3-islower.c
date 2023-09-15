#include "main.h"
#include <stdio.h>
/**
 * _islower - checks if the alphabet is in lowercase or not.
 * @c: the value 1 or 0.
 *
 * Return: 1 if c is lowercase and 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
