#include "function_pointers.h"
/**
 * array_iterator - executes a fct given as a param
 * on each element of an array
 * @array: the array of integers
 * @size: size of the array
 * @action: a pointer to the fct you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}

