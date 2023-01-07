#include "main.h"

/**
 * _strncpy - to copy string
 * @dest: to copy to
 * @src: copy from
 * @n: the char to copy
 * Return: point dest
 */

char *_strncpy(char *dest, char *src, int n)
{

	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
