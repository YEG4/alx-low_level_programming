#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *character;
    int *index;
    float *f;
    double *d;

    character = (char *) malloc_checked(sizeof(char) * 1024);
    printf("%p\number", (void *)character);
    index = malloc_checked(sizeof(int) * 402);
    printf("%p\number", (void *)index);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\number", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\number", (void *)d);
    free(character);
    free(index);
    free(f);
    free(d);
    return (0);
}