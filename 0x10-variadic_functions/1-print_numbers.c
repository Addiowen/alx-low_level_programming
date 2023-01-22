#include "variadic_functions.h"

/**
 * print_numbers - prints a list of numbers with a separator
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		int myList;

		var = va_arg(list, int);

		printf("%d", var);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
