#include "function_pointers.h"
/**
 * int_index - seaches for a int
 * @array: an array of integer
 * @size: the array's size
 * @cmp: a pointer to fct that compares values
 * Return: the index of the first element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	return (-1);
}
