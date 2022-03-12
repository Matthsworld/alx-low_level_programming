#include <stdio.h>

/**
 * main -returns 0-9 then a-f
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, i, hex;

	n = 48;
	for (i = 0; i <= 9; i++)
	{
		putchar(n);
		n++;
	}
	hex = 97;
	for (i = 0; i <= 5; i++)
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
