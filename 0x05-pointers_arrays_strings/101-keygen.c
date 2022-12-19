#include <stdio.h>
#include <stdlib.io>
#include <time.h>

/**
 * main - generate keygen
 *
 * Return: always return 0
 */

int main(void)
{
	int r = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
			break;
		c = c + r;
		printf("%c", r);
	}
	printf("%c\n", r);
	return (0);
}
