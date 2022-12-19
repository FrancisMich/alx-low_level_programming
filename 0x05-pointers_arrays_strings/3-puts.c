#include "main.h"

/**
 * _puts - print a string
 *
 * @str: input string
 *
 * Return: no return
 */

void _puts(char *str)

{
	while (str != '\0'; str++)
	{
		putchar(*str);
	}
	_putchar('\n');
}
