#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * 
 * @x: List of arguments to be printed.
 * @list: list of arguments.
 * Return: w.(Success)
 */

int get_width(const char *format, int *i, va_list list)
{
	int current;
	int w = 0;

	for (current = *i + 1; format[current] != '\0'; current++)
	{
		if (is_digit(format[current]))
		{
			w *= 10;
			w += format[current] - '0';
		}
		else if (format[current] == '*')
		{
			current++;
			w = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = current - 1;

	return (w);
}
