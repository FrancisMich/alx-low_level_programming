#include "main.h"

/**
 * print_line - print a straight line n times
 *
 * @n: times straight line printed
 *
 * Return: 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
