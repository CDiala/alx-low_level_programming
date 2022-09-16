#include "main.h"

/**
 * _ isdigit - Function that checks for a digit (0 through 9).
 * @c: An input character
 * Returns 1 if c is a digit
 * Return 0 otherwise
 */
int _isdigit(int c)
{
char x = '0';
int isdigit = 0;
for (x = 0; x <= 9; x++)
{
if (c == x)
{
isdigit = 1;
break;
}
}
return (isdigit);
}
