#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: array of integer
 * @size: array length
 * @cmp: alx function
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && size && cmp)
		while (x < size)
		{
			if (cmp(array[x]))
				return (x);
			x++;
		}
	return (-1);
}
