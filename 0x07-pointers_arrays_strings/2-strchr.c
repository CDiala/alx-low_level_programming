#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string.
 * @s: an input string to search in
 * @x: an input character to locate into string s
 * Return: returns pointer to x position
 */
char *_strchr(char *s, char x)
{

	while (*s)
	{
		if (x == *s)
			return (s);
		s++;
	}
	if (x == *s)
		return (s);
	return (NULL);
}
