#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints a struct
 * @d: pointer to struct
 */

void print_dog(struct dog *d)
{
if (d == NULL)
{/*do nothing*/}
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
if (d->age == 0)
printf("Name: (nil)\n");
else
printf("Name: %0.1f\n", d->age);
if (d->owner == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->owner);
}
