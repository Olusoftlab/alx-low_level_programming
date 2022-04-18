#include<stdio.h>
/**
 * main- entry point
 *
 * Return: 0 success
 */

int main(void)
{
	int num1;
	int num2;

for (num1 = 48; num1 < 57; num1 ++)
{
	for (num2 = 49; num2 <= 57; num2 ++)
	{
		putchar(num1);
		putchar(num2);

		if (num1 == 56 &&  num2 == 57)
			continue;

		putchar(',');
		putchar(' ');
	}
}

putchar('\n');

return (0);
}
