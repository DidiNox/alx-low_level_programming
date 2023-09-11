#include <stdio.h>
/**
 * main - printing lowercase alphabets in reverse.
 *
 * Return: returns the value o.
 */
int main(void)
{
	char let;

	for (let = 122; let >= 97; let--)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}
