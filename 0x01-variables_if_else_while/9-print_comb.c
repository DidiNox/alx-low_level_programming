#include <stdio.h>
/**
 * main - prints number 0 - 9 in tabs.
 *
 * Return: returns the value 0.
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
		if (x == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
