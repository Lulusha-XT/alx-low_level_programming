#include "main.h"

/**
 * _isupper - checks for uppercase character
 * Return: Returns 1 if c is uppercase and 0 otherwise
 * @c: character to be checked
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
