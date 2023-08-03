#include "main.h"

/**
 * set_bit -set bits 
 * @n: changes numbers
 * @index: indxer
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
