#include "main.ih"

/**
 * print_triangle - print triangle
 *@size: size of the triangle
 * Return : Always 0
 */

void print_triangle(int size)
{
	int row, lines, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (lines = 1; lines <= row; lines++)
			{
				_putchar('-');
			}
			_putchar('\n');
		}
	}
}

