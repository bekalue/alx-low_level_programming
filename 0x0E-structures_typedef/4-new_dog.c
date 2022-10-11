#include"dog.h"
#include <string.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: dog owner.
 *
 * Return: a pointer to new created struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}
	strcpy(my_dog->name, name);
	strcpy(my_dog->owner, owner);
	my_dog->age = age;

	return (my_dog);
}
