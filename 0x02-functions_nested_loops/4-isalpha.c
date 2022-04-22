#include "main.h"
/**
 * _isalpha - check for alphabet
 * @c: letter being tested
 * Return: 1 for either alphabet and 0 if found
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') && (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
