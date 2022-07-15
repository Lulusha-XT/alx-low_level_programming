#include <stdio.h>
/**
* main - entry  point
*
* Return: always return 0
*/
int main(void)
{
char alphabet;
char alphabetu;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}


for (alphabetu = 'A'; alphabetu <= 'Z'; alphabetu++)
{
putchar(alphabetu);
}
putchar('\n');
return (0);
}

