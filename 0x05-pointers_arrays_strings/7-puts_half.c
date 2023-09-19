#include "main.h"

/**
 * puts_half - print second half  of a string
 *
 * @str: input
 *
 * Description: if odd len, n = (length_of_the_string - 1) / 2
 * Return: half of input
*/

void puts_half(char *str)
{
int i;

for (i = 0; str[i] != '\0'; ++i)
;

i++;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
