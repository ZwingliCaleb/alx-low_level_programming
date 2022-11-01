#include "main.h"
#include <stdio.h>
#include <string.h>

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
	memcpy(dest, src, n);

	return (dest);
}
