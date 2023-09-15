#include "main.h"

/**
 * main -  prints the numbers 1 - 100 followed by a new line
 *
 * print Fizz for numbers that multiplies of 3
 * print Buzz for numbers that multiplies of 5
 * and FizzBuzz for numbers that multiplies of both
 * each number and word to be separated by space
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int num;

for (num = 1; num <= 100; num++)
{
if (num % 3 == 0 && !(num % 5 == 0))
printf("Fizz");
else if (num % 5 == 0 && !(num % 5 == 0))
printf("Buzz");
else if (num % 3 == 0 && num % 5 == 0)
printf("FizzBuzz");
else
printf("%d", num);

if (num != 100)
printf(" ");
else
print("\n");
}

return (0);
}
