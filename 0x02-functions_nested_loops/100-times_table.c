#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints n times table, starting with 0.
 * @n: an integer
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int i, j, mul;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				mul = i * j;
				_putchar(44);
				_putchar(32);
				if (mul <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(mul + 48);
				}
				else if (mul <= 99)
				{
					_putchar(32);
					_putchar((mul / 10) + 48);
					_putchar((mul % 10) + 48);
				}
				else
				{
					_putchar(((mul / 100) % 10) + 48);
					_putchar(((mul / 10) % 10) + 48);
					_putchar((mul % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
