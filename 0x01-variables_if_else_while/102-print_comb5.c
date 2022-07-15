#include <stdio.h>
/**
* main - entry  point
*
* Return: always return 0
*/
int main(void)
{
int digit1, digit2;
for (digit1 = 0; digit1 < 99; digit1++)
{
for (digit2 = digit1; digit2 < 99; digit2++)
{
if (digit1 != digit2)
{
putchar((digit1 / 10) + 48);
putchar((digit1 % 10) + 48);
putchar(' ');
putchar((digit2 / 10) + 48);
putchar((digit2 % 10) + 48);

if (digit2 * 100 + digit1 != 9899)
{

putchar(',');
putchar(' ');

}

}
}


}

putchar('\n');
return (0);
}
