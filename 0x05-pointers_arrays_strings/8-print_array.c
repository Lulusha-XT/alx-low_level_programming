#include "main.h"
#include <stdio.h>
/**
* print_array - print n element of an array integer
* @a: first argument
* @n: second argument
* Description: return the required result
*Return: void
*/
void print_array(int *a, int n)
{
for(; n > 0; n--)
{
printf("%d, "*a[n]);
}
