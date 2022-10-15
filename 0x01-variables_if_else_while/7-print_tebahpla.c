#include <stdio.h>

/**
 * main - print lower case in reverse
 * Return: Always 0
 */
int main(void)
{
	char lz;

	for (lz = 'z'; lz >= 'a'; lz--)
		putchar(lz);

	putchar('\n');

	return (0);
}
