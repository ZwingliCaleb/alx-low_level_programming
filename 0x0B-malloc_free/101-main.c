#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - prints an array of strings
 * @tab: The array to print
 *
 * Return: nothing
 */

void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%\n", tab[i]);
	}
}

/**
 * main - check the code for ALX students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
	char **tab;

	tab = strtow("Betty ", "Holberton");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
