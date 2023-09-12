#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - determines the length of a string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int r;

	r = 0;

	while (s[r] != '\0')
	{
		r++;
	}

	return (r);
}

/**
 * _strcpy - copies string
 * @dest: pointer to the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, r;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (r = 0; r < length; r++)
	{
		dest[r] = src[r];
	}
	dest[r] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int pos, ind;

	pos = _strlen(name);
	ind = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (pos + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (ind + 1));
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
