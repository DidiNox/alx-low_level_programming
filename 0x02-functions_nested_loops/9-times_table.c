#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting from 0.
 *
 * Return: returns void.
 */
void times_table(void)
{
	int i, j, times;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			times = i * j;

			_putchar(44);
			_putchar(32);
			if (times <= 9)
			{
				_putchar(32);
				_putchar(times + 48);
			}
			else
			{
				_putchar((times / 10) + 48);
				_putchar((times % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
