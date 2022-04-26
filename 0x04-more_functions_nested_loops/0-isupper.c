#include "main.h"
/**
 * _isupper - check for upper case
 * @c: input
 * Return: 1 if c is capital
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
