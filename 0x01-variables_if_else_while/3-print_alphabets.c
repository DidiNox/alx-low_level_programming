#include <stdio.h>
/**
 * main - prints lowercase and uppercase alphabets using putchar()
 *
 * Return: returns the value 0.
 */
int main(void)
{
	char let;

	for (let = 97; let <= 122; let++)
	{
		putchar(let);
	}
	for (let = 65; let <= 90; let++)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}
