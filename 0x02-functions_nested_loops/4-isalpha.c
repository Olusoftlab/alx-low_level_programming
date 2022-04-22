#include "main.h"
/**
 * _isalpha - check for alphabet
 * @c: letter being tested
 * Return: 1 for either alphabet and 0 if found
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
