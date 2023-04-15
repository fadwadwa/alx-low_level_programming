#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: a pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		new_ptr = malloc(new_size);
	else
	{
		new_ptr = malloc(new_size);
		if (new_ptr != NULL)
		{
			if (new_size <= old_size)
				memcpy(new_ptr, ptr, new_size);
			else
				memcpy(new_ptr, ptr, old_size);
			free(ptr);
		}
	}
	return (new_ptr);
}
