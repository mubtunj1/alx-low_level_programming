#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in `array`
 * @value: value to search for
 *
 * Return: indenum containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int lw, mid, hig;
	int num;

	if (array == NULL)
	{
		return (-1);
	}

	lw = 0;
	hig = size - 1;

	while (lw <= hig)
	{
		mid = (lw + hig) / 2;

		printf("Searching in array: ");
		for (num = lw; num <= hig; num++)
			printf("%i%s", array[num], num == hig ? "\n" : ", ");

		if (array[mid] < value)
			lw = mid + 1;
		else if (array[mid] > value)
			hig = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
