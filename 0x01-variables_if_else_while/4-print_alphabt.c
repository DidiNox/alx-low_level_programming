#include <stdio.h>
/**
 * main - print alphabet in lowercase format.
 * With the exceptions 'q' and 'e'.
 *
 * Return: returns the value 0.
 */
int main(void)
{
	char let;

	for (let = 97; let <= 122; let++)
	{
		if (let != 101 && let != 113)
		{
			putchar(let);
		}
	}
	putchar('\n');
	return (0);
}
