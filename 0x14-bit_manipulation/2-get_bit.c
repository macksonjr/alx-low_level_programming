#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: numbers
 * @index: index of the bits
 *
 * Return: value of the bits
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
