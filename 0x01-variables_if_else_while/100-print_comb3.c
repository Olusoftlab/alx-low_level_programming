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

for (num1 = 48; num1 < 57; num1 = num1 + 1)
{
	for (num2 = num1 + 1; num2 <= 57; num2 = num2 + 1)
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
