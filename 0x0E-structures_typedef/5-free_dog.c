#include "dog.h"
#include <stdlib.h>
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
