#include "main.h"

/**
 * print_times_table - prints multiplication table up to n
 * @n: integer argument
 */

void print_times_table(int n)
{
	int row;
	int column;
	int product;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar(48);
			for (column = 1; column <= n; column++)
			{
				product = (row * column);
				_putchar(44);
				_putchar(32);
				if (product <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(48 + product);
				}
				else if (product <= 99)
				{
					_putchar(32);
					_putchar(48 + (product / 10));							
					_putchar(48 + (product % 10));
				}
				else
				{
					_putchar(48 + ((product / 100) % 10));
					_putchar(48 + ((product / 10) % 10));						
					_putchar('0' + (product % 10));
				}
			}
			_putchar('\n');
		}
	}
}
