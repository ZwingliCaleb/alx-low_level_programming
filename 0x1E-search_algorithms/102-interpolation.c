#include "search_algos.h"

/**
 * interpolation_search - searches for a value in array
 * @array: pointer to the first element of aray to search
 * @size: number of elements in array
 * @value: value to search
 * Return: the first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l, m, n;
	if (array != NULL && size > 0)
	{
		l = 0;
		n = size - 1;
		while (array[1] != array[n])
		{
			m = l + (((double)(n - l) / (array[n] - array[l])) * (value - array[l]));
			if (m < l || m > n)
			{
				printf("value checked array[%lu] is out of range\n", m);
				break;
			}
			printf("value checked array[%lu] = [%d]\n", m, array[m]);
			if (array[m] < value)
				l = m + 1;
			else if (array[m] > value)
				n = m - 1;
			else
				return (m);
		}
	}
	return (-1);
}
