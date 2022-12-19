#include "main.h"

/**
 *  _strlen - return length
 *
 *  @s: string pointer
 *
 *  Return: Return length
 */

int _strlen(char *s)

{
	int p = 0;

	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
