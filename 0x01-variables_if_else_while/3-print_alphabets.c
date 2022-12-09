#include <stdio.h>
#include <stdio.h>
/**
 * main - return both lower and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		ch++;
	}

	putchar('\n');
	return (0);
}
