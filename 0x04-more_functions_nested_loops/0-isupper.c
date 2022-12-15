#include "main.h"

/**
 * _isupper - check if a letter is uppercase
 * @c: input character
 * *Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
