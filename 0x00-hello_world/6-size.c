#include <stdio.h>
/**
 * main - main function
 *
 * Return: the value 0
 */
int main(void)
{
	int d;
	char c;
	long int a;
	long long int b;
	float f;

	printf("Size of a char: %c byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(d));
	printf("Size of a long int: %lu byte(s)\n", sizeof(unsigned a));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(unsigned b));
	printf("Size of a float: %f byte(s)\n", sizeof(f));
	return (0);
}
