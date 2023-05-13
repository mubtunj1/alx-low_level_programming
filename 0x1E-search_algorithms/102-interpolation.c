#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t lw = 0;
	size_t hig = size - 1;
	size_t pos;

	if (!array)
		return (-1);

	while ((array[hig] != array[lw]) &&
	       (value >= array[lw]) && (value <= array[hig]))
	{
		pos = lw + (((double)(hig - lw) / (array[hig] - array[lw]))
			    * (value - array[lw]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			lw = pos + 1;
		else if (value < array[pos])
			hig = pos - 1;
		else
			return (pos);
	}
	if (value == array[lw])
	{
		printf("Value checked array[%lu] = [%d]\n", lw, array[lw]);
		return (lw);
	}
	pos = lw + (((double)(hig - lw) / (array[hig] - array[lw]))
		     * (value - array[lw]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
