#include "main.h"

/**
 *more_numbers -from 0 to 14
 */
void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar('1');
		}
		_putchar ('\n');
	}
}
