/**
 * print_square - prints a square
 * @size: the size of the square
 * Return: Always 0.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
	}
}
