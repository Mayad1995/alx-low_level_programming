#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers
 *
 * Return: Always 0 (success)
*/
int main(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
{
putchar('0' + digit);
}
putchar('\n');

return (0);
}
