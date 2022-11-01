#include "main.h"

/**
 * *_memset - main function.
 * @s: Pointer to the buffer
 * @b: The constant byte.
 * @n: size of the buffer to be filled.
 *
 * Description: This function fills memory with a constant byte.
 *
 * Return: A pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
