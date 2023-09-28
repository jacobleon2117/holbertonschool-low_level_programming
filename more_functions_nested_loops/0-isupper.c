#include "main.h" 
/**
 * main - entry point
 *
 * Return: Always 0 
 */
int _isupper(int c);
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
