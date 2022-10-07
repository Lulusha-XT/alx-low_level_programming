#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * Return: returns 1 for success
 * @c: is the integer to be computed
 */
int _abs(int c)
{
	int ch;

	if (c >= 0)
	{
		return (c);
	}
	else
	{
		ch = c * -1;
		return (ch);
	}
	return (0);
	_putchar('\n');
}
