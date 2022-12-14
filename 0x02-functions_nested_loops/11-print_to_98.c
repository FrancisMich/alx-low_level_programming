#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all number to 98
 *
 * @n: starting number
 */

void int main(n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
