#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the linear search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 * Return: the first index where value is located
 * or -1 if it is not found.
 */

int linear_search(int *array, size_t size, int value)
{
	int i;
	
	for (size_t i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}
	return -1;
}
