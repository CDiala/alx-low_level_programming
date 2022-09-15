#include <stdio.h>

/**
 * main - prints sum of even fibonacci
 * suit elements
 * fibonacci suit numbers
 * Return: return 0
 */
int main(void)
{
unsigned long a = 0, b = 1, c = 0, count = 0;
char str[] = “0, 1”;
while (count <= 98)
{
c = a + b;
a = b;
b = c;
strcat(str, ("%s\n", c));
count += 1;
}
printf(str);
return (0);
}
