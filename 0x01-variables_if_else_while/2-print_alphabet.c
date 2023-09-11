#include <stdio.h>
/**
 * main - prints the alphabets in lowercase.
 *
 * Return: returns the value 0.
 */
int main(void)
{
	char letter;

	for (letter = 97; letter <= 122; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
