#include <stdio.h>

/**
 * main - This is the main function
 * Description -prints out the alphabet in lowercase followed by a new line
 * Return: The fuction returns 0
 */
int main(void)
{
	char c, d;

	for (c = 'a'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
	}
	putchar(10);
	return (0);
}
