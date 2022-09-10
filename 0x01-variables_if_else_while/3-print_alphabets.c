#include <stdio.h>
/**
 * main - prints the alpabets in lowercase and lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a', caps_alphabet = 'A';

	while (alphabet <= 'z')
	{
		putchar (alphabet);
		alphabet++;
	}
	putchar('\n');

	while (caps_alphabet <= 'Z')
	{
		putchar (caps_alphabet);
		caps_alphabet++;
	}
	putchar('\n');
	return (0);
}
