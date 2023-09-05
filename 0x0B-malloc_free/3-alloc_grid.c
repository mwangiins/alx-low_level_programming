#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 * @width: width of array
 * @height: height of array
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int **len, a, c;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	len = malloc(height * sizeof(int *));
	if (len == NULL)
	{
		free(len);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		len[a] = malloc(width * sizeof(int));
		if (len[a] == NULL)
		{
			for (a--; a >= 0; a--)
			{
				free(len[a]);
			}
			free(len);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (c = 0; c < width; c++)
		{
			len[a][c] = 0;
		}
	}
	return (len);
}

