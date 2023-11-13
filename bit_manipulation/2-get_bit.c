#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit - finds the sum of the bit and then aligns ligns with the  index
 * @n: number that is being checked
 * @index: specified index
 * Return: the value of the bit, or -1 if an error occurs
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	unsigned int bit;
	unsigned int sigbit = sizeof(unsigned long int) * 8 - 1;

	if (index == 0)
		return ((n >> 0) & 1);

	for (i = sigbit; i > 0; i--)
	{

		bit = (n >> i) & 1;
		if (i == index)
			return (bit);
	}
	return (-1);
}
