#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
