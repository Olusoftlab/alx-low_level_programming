#include "main.h"
/**
 * _isdigit - check for d char
 * @c: char to check
 *
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
