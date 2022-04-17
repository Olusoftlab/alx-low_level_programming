#include<stdio.h>
/**
 * main- entry point
 *
 * Return: 0 success
 */

int main(void)
{
	char alpha_lowercase;
	char alpha_uppercase;

for (alpha_lowercase = 'a'; alpha_lowercase <= 'z'; alpha_lowercase++)
{
	putchar(alpha_lowercase);
	for (alpha_uppercase = 'A'; alpha_uppercase <= 'Z'; alpha_uppercase++)
		putchar(alpha_uppercase);
}

putchar('\n');

return (0);
}		
