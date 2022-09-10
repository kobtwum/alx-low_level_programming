#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char num = '0';
	char alphabet = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (alphabet < 'h')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
