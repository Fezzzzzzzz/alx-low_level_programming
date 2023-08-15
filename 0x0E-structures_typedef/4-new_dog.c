#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to a string.
 * Return: Length of the string.
 */

int _strlen(char *s)
{
	int sum;

	for (sum = 0; *s != '\0'; s++)
	{
		sum++;
	}

	return (sum);
}
/**
 * _strcpy - function that copies the string
 * @src: The destination string
 * @dest: The source string
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!new_dog->name)
	{
		free(new_dog->name);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!new_dog->owner)
	{
		free(new_dog->owner);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
