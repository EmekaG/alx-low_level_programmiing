#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @-: line character to be drawn
 * @n: number of times the line character is printed
 */
void print_line(int n)
{
	int lenght;

	if (n > 0)
	{
		for (lenght = 0; lenght < n; lenght++)
			_putchar('_');
	}

	_putchar('\n');
}
