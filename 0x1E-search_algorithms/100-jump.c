#include "search_algos.h"

/**
 * jump_search - Performs a jump search on a sorted array of integers.
 * @array: Pointer to the first element of the array to be searched.
 * @size: The total number of elements in the array.
 * @value: The target value to find in the array.
 *
 * Return: Returns -1 if the value is not found or if the array is NULL.
 *         Otherwise, returns the index of the first occurrence of the value.
 *
 * Description: Outputs each value as it is compared in the array.
 *              The jump interval is the square root of the array's size.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
