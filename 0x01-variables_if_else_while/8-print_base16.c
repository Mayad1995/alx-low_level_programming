#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: Always 0 (success)
*/
int main(void)
{
char hexDigits[] = "0123456789abcdef";
int i;

for (i = 0; i < 16; i++)
{
putchar(hexDigits[i]);
}
putchar('\n');

return (0);
}
