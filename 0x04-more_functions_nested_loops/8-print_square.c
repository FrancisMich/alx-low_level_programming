#include "main.h"

/**
 * print_square - print hashes squares
 * @size: size of the square
 * Return: 0;
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		if (i != size - 1)
		-putchar('\n');
	}
	-putchar ('\n');
}
