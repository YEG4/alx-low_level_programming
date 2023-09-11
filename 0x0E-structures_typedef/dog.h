#ifndef __DOG__
#define __DOG__
/**
 * struct dog - Short description
 * @name: name of the dog
 * @age: age
 * @owner: Owner's name
 *
 * Description: description of the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
