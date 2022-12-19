#include "main.h"
/**
 * puts_half - print half of a string
 * @str: character
 */
void puts_half(char *str)
{
	int q, r, s, t;

	q = string_length(str) / 2;

	if (string_length(str) % 2 == 0)
	{
		for (s = q; s < string_length(str); s++)
		{
			_putchar(str[s]);
		}
	}
	else if (string_length(str) % 2 != 0)
	{
		r = (string_length(str) - 1) / 2;
		for (t = r; t <= string_length(str); t++)
		{
			_putchar(str[t]);
		}
	}
	_putchar('\n');
}

/**
 * string_length - finds the length of a string.
 * Return: length of c.
 * @pointer: pointer.
 */
int string_length(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
