#include "search_algos.h"
/**
 * ADVANCED BINARY SEARCH
 * advanced_binary_recursive - function to search recursively for value in sorted array
 * @array: pointer to the first element of search
 * @left: the starting index
 * @right: the ending index
 * @value: value to search
 * Return: -1 if the value is absent
 * desc: print array being searched
 */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;
	if (right < left)
		return (-1);
	printf("search in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}
/**
 * advanced_binary - function searches for value in sorted arrayof integers
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search
 * Return: NULL if value is absent
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
