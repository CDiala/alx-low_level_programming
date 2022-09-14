#include "main.h"

/**
 * print_sign - Check main
 * @c: An input Character
 * Description: Function returns 1 if the character is a
 * Return: 1 or 0
 */

int print_sign(int c)
{
int value;
if (c > 0)
{
value = 1;
_putchar('+');
}
else if (c == 0)
{
value = 0;
_putchar('0');
}
else
{
value = -1;
_putchar('-');
}
return (value);
}
