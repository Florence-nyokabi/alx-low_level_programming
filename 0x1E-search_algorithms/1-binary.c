#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of integers using the Binary search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: return the index where value is located else value is not present in array or if array is NULL -1
 *
 */
 
int binary_search(int *array, size_t size, int value)
{
	size_t x = 1, offset = 0, y;

	if (array == NULL)
		return (-1);
	while (size)
	{
		printf("Searching in array: %d", array[0]);
		while (x < size)
			printf(", %d", array[x++]);
		printf("\n");
		y = (size - 1) / 2;
		if (array[y] == value)
			return (y + offset);
		if (array[y] < value)
		{
			offset += y + 1;
			array += y + 1;
			if (!(size % 2))
				y++;
		}
		size = y;
		x = 1;
	}
	return (-1);
}
