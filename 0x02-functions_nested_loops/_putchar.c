#include<unistd.h>
/**
 * _putchar -write the charater c to stdout
 *
 * Return: on suess 0
 * On error, -1 is returned, and error is set appropriately
 */

int _putchar(char c )
{
	return (write(1, &c, 1));
}
	
