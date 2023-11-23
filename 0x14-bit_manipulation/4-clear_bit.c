#include "main.h"

/**
 * clear_bit - puts the value of the given bit to 0
 * @n: points to a number to be changed
 * @index: index of the bit to be cleared
 *
 * Return: -1 for failure, 1 for success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
