#include "main.h"

/**
 * _isupper - Function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase
 * Return 0 if  otherwise
 */
int _isupper(int c)
{
char uppercase = 'A';
int isupper = 0;
for (; uppercase <= 'Z'; uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}
