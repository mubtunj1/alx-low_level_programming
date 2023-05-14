#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t num;

	if (array == NULL)
	{
		return (-1);
	}

	for (num = 0; num < size; num++)
	{
		printf("Value checked array[%li] = [%i]\n", num, array[num]);
		if (array[num] == value)
		{
			return (num);
		}
	}
	return (-1);
}
