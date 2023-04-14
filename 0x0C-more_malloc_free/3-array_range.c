#include "main.h"
#include
/**
 * array_range - creates an array of int
 * @min: min
 * @max: max
 * Return: a pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		arr[i] = min + i;
	return arr;
}
