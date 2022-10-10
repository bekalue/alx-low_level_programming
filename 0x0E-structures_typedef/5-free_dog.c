#include "dog.h"
/**
 * free_dog - frees dogs.
 * @d: a pointer to dogs.
 */
void free_dog(dog_t *d)
{
	free((*d).name);
	free(d->age);
	free(d->owner);
	free(d);
}
