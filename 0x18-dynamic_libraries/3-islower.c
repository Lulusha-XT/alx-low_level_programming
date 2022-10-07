#include "main.h"

/**
 * _islower - checks for lowercase letter
 * Return: returns 1 for lowercase and 0 otherwise
 * @c: is the character to check
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
