#include "dog.h"

/**
 * new_dog - creates and allocate a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i = 0, j = 0, count = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	while (name[i])
		i++;
	while (owner[j])
		j++;
	dog->name = malloc(sizeof(char) * (i + 1));
	dog->owner = malloc(sizeof(char) * (j + 1));
	if (dog->name == NULL || dog->owner == NULL)
	{
		if (dog->name != NULL)
			free(dog->name);
		if (dog->owner != NULL)
			free(dog->owner);
		free(dog);
		return (NULL);
	}
	while (count < i)
	{
		dog->name[count] = name[count];
		count++;
	}
	dog->name[count] = '\0';
	count = 0;
	while (count < j)
	{
		dog->owner[count] = owner[count];
		count++;
	}
	dog->owner[count] = '\0';
	dog->age = age;
	return (dog);
}
