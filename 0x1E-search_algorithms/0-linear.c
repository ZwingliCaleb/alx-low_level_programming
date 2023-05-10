#include "search_algos.h"
/**
 * linear_search - an algorithm for linear search
 * @array: pointer to first array element.
 * @size: size of array
 * @value: value to find array
 * Return: index
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int f;
	if (array == NULL)
		return (-1);
	for (f = 0; f < size; f++)
	{
		printf("value checked array[%d] = [%d]\n", f, array[f]);
		if (array[f] == value)
			return (f);
	}
	return (-1);
}
