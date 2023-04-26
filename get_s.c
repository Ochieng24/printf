#include "main.h"

/**
 * get_size - Function that calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @x: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
	int current = *i + 1;
	int s = 0;

	if (format[current] == 'l')
		s = S_LONG;
	else if (format[current] == 'h')
		s = S_SHORT;

	if (s == 0)
		*i = current - 1;
	else
		*i = current;

	return (s);
}
