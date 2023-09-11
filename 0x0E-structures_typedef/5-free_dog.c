#include "dog.h"
#include <stdio.h>
/**
 * free_dog - Prints a struct
 * @d: pointer to struct
 */

void free_dog(struct dog *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
