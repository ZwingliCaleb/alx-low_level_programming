#include <stdio.h>

/**
 * main - lanzador
 *
 * Return: Always 0.
 */

int main(void)
{
	char a = 'a';
	char b = 'A';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
