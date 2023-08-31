#include "main.h"

/**
 * get_endianness - checks if the machines size
 * Return: 0 for large, 1 if it fits
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
