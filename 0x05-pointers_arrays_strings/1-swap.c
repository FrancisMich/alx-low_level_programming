#include "main.h"

/**
 * swap_int - swap function off two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)

{
	int p = *a;
	*a = *b;
	*b = p;
}
