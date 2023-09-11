#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - Prints a struct
 * @d: pointer to struct
 */

void print_dog(struct dog *d)
{
if (d == NULL)
/*do nothing*/ 
printf("Name: %s\n", d->name);
printf("Age: %0.1f\n", d->age);
printf("Owner: %s\n", d->owner);
}
