#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c_char;
	int c_int;
	long c_long;
	long long c_long_long;
	float c_float;
printf("size of a char: %d byte(s)\n", sizeof(c_char));
printf("size of an int: %d byte(s)\n", sizeof(c_int));
printf("size of a long int: %d byte(s)\n", sizeof(c_long));
printf("size of a long long int: %d byte(s)\n", sizeof(c_long_long));
printf("size of a float: %d byte(s)\n", sizeof(c_float));
return (0);
}
