#include "main.h"

/**
 * print_alphabet_x10 - Check main
 * Description: function uses _putchar function to print
 * alphabets in lowercase 10 times
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
char x;
int y;
for (y = 0; y < 10; y++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
