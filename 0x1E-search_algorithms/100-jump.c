#include "search_algos.h"
#include <math.h>

/* remember compiling math.h with gcc requires `-lm` */

size_t min(size_t a, size_t b);

/**
 * min - returns the minimum of two size_t values
 * @a: first value
 * @b: second value
 *
 * Return: `a` if lwer or equal to `b`, `b` otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - searches for a value in a sorted array of integers using the
 * Jump search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: indenum containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t lw, hig, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	for (hig = 0; hig < size && array[hig] < value;
	     lw = hig, hig += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       hig, array[hig]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", lw, hig);

	for (; lw <= min(hig, size - 1); lw++)
	{
		printf("Value checked array[%lu] = [%d]\n", lw, array[lw]);
		if (array[lw] == value)
			return (lw);
	}

	return (-1);
}
