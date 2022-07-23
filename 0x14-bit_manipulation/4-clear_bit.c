#include "main.h"

/**
 * clear_bit - set bit to 0 at given index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;
	unsigned long int mask = 1;

	/* validate index is not out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* create mask with 0 at index (...00100...) to work on that index */
	mask = ~(mask << index);
	*n = (*n & mask);
	/**
	 * Creating a mask will hold a temporary value that will be
	 * used as operand (ini with 1)
	 * bitwise NOT will change the value to assign a 0 to the
	 *  mask and shifted to the rigth in num
	 * of index.
	 * bitwise & will return 0 for the index since the mask is 0
	 */

	return (1);
}
