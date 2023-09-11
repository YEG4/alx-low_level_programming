#include "dog.h"
/**
 * init_dog - defines a struct
 * 
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner; 
}
