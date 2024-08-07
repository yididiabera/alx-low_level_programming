#include "search_algos.h"

/**
 * interpolation_search - Performs an interpolation search on a sorted array of integers.
 * @array: Pointer to the first element of the array to be searched.
 * @size: The total number of elements in the array.
 * @value: The target value to find in the array.
 *
 * Return: Returns -1 if the value is not found or if the array is NULL.
 *         Otherwise, returns the index of the first occurrence of the value.
 *
 * Description: Outputs each value as it is compared in the array.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
