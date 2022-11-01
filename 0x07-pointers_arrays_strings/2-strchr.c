#include "main.h"

/**
 * *_strchr - main function.
 * @s: Pointer to the string.
 * @c: Character to locate in the string.
 *
 * Description: This function locates a character in a string.
 *
 * Return: a pointer to the first occurence of the character c
 * in the string s, or NULL if the character is not found.
 */

{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (!c ? s : NULL);
}
