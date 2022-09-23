int check_seperators(char c);

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: An input string to capitalize letters
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (x == 0 && (s[x] >= 'a' && s[x] <= 'z'))
			s[x] -= 32;

		if (check_seperators(s[x]) && (s[x + 1] >= 'a' && s[x + 1] <= 'z'))
			s[x + 1] -= 32;
		x++;
	}

	return (s);
}

/**
 * check_seperators - Separators of words: space, tabulation, new line,
 * ,, ;, ., !, ?, ", (, ), {, and }
 * @c: an input character
 * Return: 1 if seperator, 0 otherwise
 */
int check_seperators(char c)
{
	int x = 0;
	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };
	for (; x < 13; x++)
	{
		if (c == seperators[x])
			return (1);
	}
	return (0);
}
