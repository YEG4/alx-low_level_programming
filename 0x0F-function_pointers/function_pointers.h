#ifndef __FPOINTERS__
#define __FPOINTERS__
#define size_t int
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
#endif