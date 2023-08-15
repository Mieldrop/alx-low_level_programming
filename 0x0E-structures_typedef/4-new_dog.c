#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(const char *str);
char *_strcpy(char *dest, char *arc);

/**
 * _strlen - prints the length of a string
 * @str: the string
 * Return: length of str
 */
int _strlen(const char *str)
{
	int a = 0;

	while (*str++)
		a++;
	return (a);
}

/**
 * _strcpy - returns a copied string
 * @arc: string to copy
 * @dest: where to be copied into
 * Return: dest
 */
char *_strcpy(char *dest, char *arc)
{
	int i;

	for (i = 0; arc[i]; i++)
		dest[i] = arc[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Return: struct pointer dog
 * return NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/* if name and owner are empty and age is less than zero return NULL*/
	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
