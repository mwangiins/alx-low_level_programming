#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: size of the allocated memory block
 * @new_size: new size of the new memory block
 * Return: if new_size == old_size return ptr
 *         If ptr is NULL return malloc(new_size)
 *         If new_size is equal to zero return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pnt, *mem;
	unsigned int r;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	pnt = malloc(new_size);
	if (pnt == NULL)
		return (NULL);

	mem = ptr;

	if (new_size < old_size)
	{
		for (r = 0; r < new_size; r++)
			pnt[r] = mem[r];
	}

	if (new_size > old_size)
	{
		for (r = 0; r < old_size; r++)
			pnt[r] = mem[r];
	}

	free(ptr);
	return (pnt);
}
