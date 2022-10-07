#include "main.h"
#include <ctype.h>

/**
 * _atoi - converts string to integer
 * @s: the string
 *
 * Return: integer value of string
 */
int _atoi(char *s)
{
	int i = 0, neg = 0, d;
	int num = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			neg++;
		}
		else if (isdigit(s[i]))
		{
			while (isdigit(s[i]))
			{
				d = (s[i] - '0');
				d = neg % 2 ? -d : d;
				num = num * 10 + d;
				i++;
			}
			break;
		}
		i++;
	}
	return (num);
}
