#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * Return: returns 1 for alphabetic character and 0 otherwise
 * @c: is the character to check
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
	_putchar('\n');
}
