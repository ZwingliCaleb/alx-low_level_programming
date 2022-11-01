#include "main.h"

/**
 * *_memcpy - main function.
 * @dest: Pointer to destination.
 * @src: Pointer to the source.
 * @n: Number of bytes to copy.
 *
 * Description: This function copies memory area.
 *
 * Return: A pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
