#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog.
 * @d: object for the struct dog.
 * @name: a name to be intialized for element <name> of struct dog.
 * @age: an age to be intialized for an element <age> of struct dog.
 * @owner: a name of owner to be intialized to an element <owner>
 * of struct dog.
 *
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
