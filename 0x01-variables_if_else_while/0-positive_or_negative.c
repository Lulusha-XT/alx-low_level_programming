#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
* main -> entry point
*
*
* Return: always return 0
*
*
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positve\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
printf("size of a long int: %d byte(s)\n", sizeof(long));
printf("size of a long int: %d byte(s)\n", sizeof(long));
return (0);
}
