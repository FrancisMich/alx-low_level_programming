#include "main"

/**
 * print_sign - print signs
 *
 * @n: condition
 *
 * Return: -1, 0, 1
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	esle if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}