#include "main.h"

/**
 * get_bit - returns the value  of a bit at an index usinga decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of thr bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	bit_val = (n >> index) & 1;

	return (bit_val);

	if (index > 63)
		return (-1);
}
