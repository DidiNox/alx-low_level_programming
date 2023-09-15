#include "main.h"
#include <stdio.h>
/**
 * main - prints out the word putchar
 *
 * Return: returns the value 0.
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i;
	int siz;

	siz = sizeof(str) / sizeof(int);
	for (i = 0; i < siz; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
