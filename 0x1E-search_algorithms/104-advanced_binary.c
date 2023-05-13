#include "search_algos.h"

int binary_search_recursion(int *array, int value,
			    size_t lw, size_t hig);

/**
 * binary_search_recursion - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to first element of array to seach
 * @value: value to search for
 * @lw: starting index in array
 * @hig: ending index in array
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */
int binary_search_recursion(int *array, int value,
			    size_t lw, size_t hig)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid = (lw + hig) / 2;
	printf("Searching in array: ");
	for (i = lw; i <= hig; i++)
		printf("%i%s", array[i], i == hig ? "\n" : ", ");

	if (array[lw] == value)
		return ((int)lw);

	if (array[lw] != array[hig])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value,
							mid + 1, hig));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value,
							lw, mid));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using a binary search algorithm. Unlike `binary_search`, consistently
 * returns first appearance of `value` in array
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t lw = 0;
	size_t hig = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, lw, hig));
}
