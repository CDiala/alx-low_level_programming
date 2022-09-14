/**
 * _isalpha - Check main
 * @x: An input Character
 * Description: Function returns 1 if the character is a
 * letter, lowercase or uppercase
 * Return: 1 if is l or 0
 */
int _isalpha(int x)
{
char lower, upper;
int isletter = 0;
for (lower = 'a'; lower <= 'z'; lower++)
{
for (upper = 'A'; upper <= 'Z'; upper++)
{
if (x == lower || x == upper)
{
isletter = 1;
}
}
}
return (isletter);
}
