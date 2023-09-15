#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times.
 *
 * Return: returns void
 */
void print_alphabet_x10(void)
{
	int i;
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

}
