#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num == '9')
			break;
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');

	return (0);
}
