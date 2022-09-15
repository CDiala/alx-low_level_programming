#include <stdio.h>

/**
 * main - prints out first 50
 * fibonacci suit numbers
 * Return: return 0
 */
int main(void)
{
int num;
unsigned long x = 0, y = 1, z;
for (num = 0; num < 50; num++)
{
z = x + y;
printf("%lu", z);
x = y;
y = z;
if (num == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
