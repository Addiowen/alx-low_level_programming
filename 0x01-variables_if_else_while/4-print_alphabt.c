#include <stdio.h>

/**
 * main - print alphabet except q and e
 *
 * Return: zero
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++
	}
	putchar('\n');
	return (0);
}
