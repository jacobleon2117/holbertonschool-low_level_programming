#include "main.h"
/**
* print_alphabet_10x - prints the alphabet 10 time
*
* Description: using nested for loops to go over the alphabet ten times
*/
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}
