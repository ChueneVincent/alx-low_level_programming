#include "main.h"

/**
 *_memcpy - Copies bytes from memory area src to memory area dest
 *@dest: Destination area memory
 *@src: Source memory area
 *@n: Data
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
}
