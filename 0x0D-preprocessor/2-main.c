#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file it was compiled from,
 * followed by a new line.
 * @argc: returns counter to program executed commands.
 * @argv: store executed commands as strings.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", __FILE__);
	return (0);
}
