#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphapet in lowercase then in uppercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
char ch = 'a';
char Ch = 'A';

/*print a - z*/
while (ch <= 'z')
{
putchar (ch);
ch++;
}

/*print A - Z*/
while (Ch <= 'Z')
{
putchar (Ch);
Ch++;
}
putchar ('\n');

return (0);
}
