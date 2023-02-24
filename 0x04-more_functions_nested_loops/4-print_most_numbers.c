#include "main.h"

/**
*print_most_numbers - prints numbers 0123456789
*
*Return: void
*/

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '24' || c == '44'))
	_putchar(c);
	}
	_putchar('\n');
}
