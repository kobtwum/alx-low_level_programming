#include "main.h"

/**
 * _islower - Checks for lowercase chatacter.
 * c: The character being checked
 * Return: 1 if character is lowercase, and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
