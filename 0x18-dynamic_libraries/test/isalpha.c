#include "main.h"
#include <ctype.h>
/**
 *_isalpha - Check for the alphabetic character.
 *@c: Verify Character
 *Return: 0
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
{
return (1);
}
else
return (0);
}
