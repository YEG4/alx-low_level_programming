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
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_string_copy(char *dest, char *src);
int _lenstr(char *s);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(struct dog *d);
#endif
