#include <stdio.h>
/**
* main - entry  point
*
* Return: always return 0
*/
int main(void)
{
int number;
for (number = 48; number <= 57; number++)
{
putchar(number);
if (number == 57)
{
break;
}
putchar(',');
putchar(' ');
}

putchar('\n');
return (0);
}

