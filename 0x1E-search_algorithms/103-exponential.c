#include "search_algos.h"
/**
 * _binary_search - function that searches for a value in an assorted array
 * @array: pointer to the first element in array
 * @left: thestartinng index
 * @right: the ending index
 * @value: the value to search for
 * Return: NULL if value is absent or the index for location for which the value is present
 * desc: print the arraybeing searched
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;
	if (array == NULL)
		return (-1);
	while (right >= left)
	{
		printf("search in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}

/** EXPONENTIAL SEARCH
 * exponential_search - searches value in a sorted arrayof integers using exponential search algo
 * @array: pointer to the first elementof array to be searched
 * @size: number of elements in array
 * @value: value to search
 * Return: NULL if value is absent
 * Desc: prints each time a value is compared in array
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;
	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	right = i < size ? i : size - 1;
	printf("Value found between indices [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
