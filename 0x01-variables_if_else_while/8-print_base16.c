#include <stdio.h>
/**
 * main - prints the numbers and letters of base 16.
 *
 * Return: returns the value 0.
 */
int main(void)
{
	int x;
	char lett;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');
	for (lett = 'a'; lett <= 'f'; lett++)
	{
		putchar(lett);
	}
	putchar('\n');
	return (0);
}
