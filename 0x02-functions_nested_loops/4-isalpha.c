#include "main.h"

/**
 * _isalpha - checks for alphabetical letters
 *
 * @c: character to check
 *
 * Return: return either 0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
