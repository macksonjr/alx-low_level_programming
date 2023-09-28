#include "main.h"

/**
 * clear_bit - Value of a given bit to 0
 * @n: pointer of numers
 * @index: index of bit
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
