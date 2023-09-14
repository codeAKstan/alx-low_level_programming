#include "main.h"

/**
 * more_numbers - entry poit
 */

void more_numbers(void)
{
	int i = 0;
	char n;
	char j;

	while (i < 10)
	{
		n = 48;

		while (n < 58)
		{
			_putchar(n);
			n++;
			if (n == 58)
			{
				j = 16;

				while (j < 21)
				{
					_putchar(j + '1');
					j++;
				}
			}
		}

		_putchar('\n');
		i++;
	}

}
