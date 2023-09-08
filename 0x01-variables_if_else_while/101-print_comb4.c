#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fnum = 0;

	while (fnum <= 7)
	{
		int snum = fnum + 1;

		while (snum <= 8)
		{
			int tnum = snum + 1;

			while (tnum <= 9)
			{
				putchar(fnum + '0');
				putchar(snum + '0');
				putchar(tnum + '0');

				if (fnum != 7 || snum != 8 || tnum != 9)
				{
					putchar(',');
					putchar(' ');
				}
				tnum++;
			}
			snum++;
		}
		fnum++;
	}
	putchar('\n');
	return (0);
}
