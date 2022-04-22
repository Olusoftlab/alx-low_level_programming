#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: number being tested
 * Return: 0 always
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = -n;
		_putchar(n + '0');
		return (0);
	}
}

