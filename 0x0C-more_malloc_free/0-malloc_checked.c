#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory insong malloc
 * @b: memory to allocate
 *
 * Return: pointer t allocateed memomry
 */

void *malloc_checked(unsigned int b)
{
	void *p;
	
	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
