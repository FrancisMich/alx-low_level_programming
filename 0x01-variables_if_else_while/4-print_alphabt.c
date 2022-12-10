#include <stdio.h>
#include <stdlib.h>
/**
 * main - return alphabets both exceot e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'q') && (ch != 'e'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
