#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - returns a ptr to a 2d array of int
 * @width: width
 * @height: height
 * Return: null on failure or a pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **) malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) calloc(width, sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
