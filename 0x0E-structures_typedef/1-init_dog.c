#include "dog.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d -> name = name;
d -> age = age;
d -> owner = owner; 
}
