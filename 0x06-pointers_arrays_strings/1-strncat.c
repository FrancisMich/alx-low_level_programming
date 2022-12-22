#include "main.h"

/**
 * _strncat -join two strings with n bit
 * @dest: copy to
 * @src: copy from
 * @n: number of char to copy
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int i;
	int j;

	i = 0;
	while (det[i] != '\0')
	{

		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
