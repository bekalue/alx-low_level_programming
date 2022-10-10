#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - description for my poppy.
 * @name: name for my dog.
 * @age: age for the dog.
 * @owner: owner for the dog.
 *
 * Description: This struct holds a attributes which are
 * related yet different types to discribe a particular object.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
