#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - length of a string
 * @str: string
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
 * _strcopy - string pointed to by src, including the
 *            terminating ('\0')
 * @dest: pointer to the string
 * @src: string copied
 *
 * Return: pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int r = 0;

	while (src[r] != '\0')
	{
		r++;
	}
	dest[r] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog.
 *
 * Return: new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
