#include <stdio.h>
/**
 * main - print numbers using putchar() without using the char keyword
 *
 * Return: returns the value 0.
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
