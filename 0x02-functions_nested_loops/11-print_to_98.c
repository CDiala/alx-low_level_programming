#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Check Main
 * @x: A input integer
 * Description: Function that prints all natural numbers
 * from x to 98, following by a new line.
 * Return: Nothing
 */
void print_to_98(int x)
{
if (x <= 98)
{
for (; x <= 98; x++)
{
printf("%d", x);
if (x == 98)
{
continue;
}
printf(", ");
}
printf("\n");
}
else
{
for (; x >= 98; x--)
{
printf("%d", x);
if (x == 98)
{
continue;
}
printf(", ");
}
printf("\n");
}
}
