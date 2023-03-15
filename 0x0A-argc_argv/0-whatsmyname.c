#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of command line arguments
 * @argv: array containing program arguments
 * Return: always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

