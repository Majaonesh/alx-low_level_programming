#include "main.h"
#include <stdio.h>
/**
* print_number - Prints an integer.
* @n: The integer to prints.
*
* Return: void !
*/
void print_number(int n)
{
unsigned int k = n;

if (n < 0)
{
n *= -1;
n *= -1;

}

_putchar('-');

if (k != 0)
print_number(k);

_putchar((unsigned int) n % 10 + '0');

}
