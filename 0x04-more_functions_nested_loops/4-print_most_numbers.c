#include "main.h"
/**
 *print_most_numbers - print num except 2 and 4
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
char c;

for (c = '0'; c <= '8'; c++)

{

if ((c == '2' || c == '4'))

_putchar(c);
}
_putchar('\n');
}
