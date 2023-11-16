#include "monty.h"

/**
 * is_ascii - check if it is ascii
 * @a: the value to check
 * Return: 1 if succesful and 0 otherwise
 */
int is_ascii(int a)
{
	int b = a;

	if (b >= 0 && b <= 255)
	{
		return (1);
	}
	return (0);
}
