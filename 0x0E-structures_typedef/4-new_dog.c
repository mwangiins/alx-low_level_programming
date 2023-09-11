#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - the length of a string
 * @str: string to be measured
 * Return: length of the string.
 */
int _strlen(char *str)
{
	int i = 0;

	while (*str++)
		i++;

	return (i);
}

/**
 * _strcpy - copies the string pointed to by src, including the
 *            terminating null byte (\0)
 * @dest: pointer to buffer with the string copy.
 * @src: string copied
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int r, s = 0;

	while (src[r] != '\0')
	{
		r++;
	}

	for (s = 0; s < r; s++)
	{
		dest[s] = src[s];
	}

	dest[s] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: new struct dog
 *         NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int index1 = _strlen(name);
	int index2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (index1 + 1));
	if (dog->name == NULL)
	{
		free(dog);

		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (index2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
