#include <stdio.h>

/**
 * main - prints the name of program, followed by a new line.
 * @argc: number of command line arguments
 * @argv: arry containing program arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
