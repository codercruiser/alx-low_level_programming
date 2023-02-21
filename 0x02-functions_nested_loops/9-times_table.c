#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rows = row, cols = column, s = current sum
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int row, cols, d;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cols = 1; cols <= 9; cols++)
		{
			d = (row * cols);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (cols < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
