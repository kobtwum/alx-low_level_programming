#include <stdio.h>
/**
 * main - prints th alphabet in lowercase
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
