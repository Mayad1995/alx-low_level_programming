#include "main.h"

/**
 * print_diagonal - print lines diagonal
 *
 * @n: input variable
 *
 * Return: void
*/

void print_diagonal(int n)
{
int postn, space;

if (n <= 0)
_putchar('\n');
for (postn = 0; postn <= n; postn++)
{
for (space = 0; space <= postn; space++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
