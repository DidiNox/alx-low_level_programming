#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints every minute of the day.
 *
 * Return: returns void
 */
void jack_bauer(void)
{
	int i, j, x, y;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (x = 48; x <= 53; x++)
			{
				for (y = 48; y <= 57; y++)
				{
					if (i >= 50 && j >= 52)
						break;
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(x);
					_putchar(y);
					_putchar('\n');
				}
			}
		}
	}
}
