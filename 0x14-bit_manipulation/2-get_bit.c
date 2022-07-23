#include "main.h"

/**
 * get_bit - get bit at index
 * @n: number
 * @index: index within binary number
 * Return: bit 0 or 1, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int ind_bit;
	unsigned int max_bits;

	/* validate index is not out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	
	/* left shift by number of index and bitwise AND to get last bit */
	ind_bit = ((n >> index) & 1);

	return (ind_bit);
}
