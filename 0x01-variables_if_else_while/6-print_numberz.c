#include <stdio.h>
/**
 * main - prints all single digit nubmers of base 10 from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
