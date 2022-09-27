#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @str: an input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *str, char *accept)
{
	int count = 0, flag;
	char *start = accept;

	while (*str)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *str)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		str++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (count);
}

