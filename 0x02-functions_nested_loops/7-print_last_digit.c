#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: an integer.
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (i > 0)
	{
		_putchar (i + 48);
		return (i);
	}
	else
	{
		_putchar(-i + '0');
		return (-i);
	}
}
